# normalize.ps1
$extensions = @("*.c", "*.h")

foreach ($ext in $extensions) {
    Get-ChildItem -Recurse -Include $ext | ForEach-Object {
        $path = $_.FullName

        # Read the file as text
        $content = Get-Content $path -Raw

        # Convert CRLF / CR -> LF only
        $content = $content -replace "`r`n?", "`n"

        # Write back as UTF-8 *without BOM*
        $utf8NoBom = New-Object System.Text.UTF8Encoding $false
        [System.IO.File]::WriteAllText($path, $content, $utf8NoBom)
    }
}