@echo off
REM ================================
REM Usage: make_exercises.bat <target_dir> <end_number>
REM Example: make_exercises.bat C:\Users\Me\Projects 12
REM Creates ex00 through ex12 with test_exXX.c files containing a printf
REM ================================

setlocal enabledelayedexpansion

set "targetDir=%~1"
set "endNumber=%~2"

if "%targetDir%"=="" (
    echo Error: missing target directory.
    exit /b 1
)

if "%endNumber%"=="" (
    echo Error: missing end number.
    exit /b 1
)

REM Ensure target directory exists
if not exist "%targetDir%" (
    mkdir "%targetDir%"
)

REM Loop from 0 to endNumber
for /L %%i in (0,1,%endNumber%) do (
    REM Pad with leading zero if < 10
    if %%i LSS 10 (
        set "num=0%%i"
    ) else (
        set "num=%%i"
    )

    set "folderName=ex!num!"
    set "fileName=test_ex!num!.c"

    mkdir "%targetDir%\!folderName!"

    (
        echo #include ^<stdio.h^>
        echo.
        echo int main(void^)
        echo {
        echo     printf("Hello, World!\\n"^);
        echo     return 0;
        echo }
    ) > "%targetDir%\!folderName!\!fileName!"
)

echo Done! Created exercise folders ex00 through ex%endNumber% in "%targetDir%".
endlocal