# Like the previou excercies we're supposed to have run in bin/sh, using the "Shebang" as they callit will let us
# Apparently lets us runa different shell loader and interpreter for ho the bash script should be exectued. The idea is
# https://stackoverflow.com/questions/8967902/why-do-you-need-to-put-bin-bash-at-the-beginning-of-a-script-file#:~:text=Adding%20%23!%2Fbin%2Fbash%20as,or%20%22sha%2Dbang%22.

# Compile all .c files into object files (.o) for intermediate use like compilation done in IDE's
gcc -Wall -Wextra -Werror -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

# Archive them into a static library, rcs is to
# r replace inserts the files into the archive, essentially forcefully "updating" them if the archive already exits
# c is to create the archive if it doesn't already exist
# s indexes the object files in the archive, for linking later into other executables
# https://stackoverflow.com/questions/29714300/what-does-the-rcs-option-in-ar-do
ar rcs libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

# Clean up object files
rm -f ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
