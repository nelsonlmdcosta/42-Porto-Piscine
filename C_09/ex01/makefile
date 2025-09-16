# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Important Directories OBJ will just be put next to srcs
SRCDIR = srcs
INCDIR = includes
OBJDIR = $(SRCDIR)

# Files without pathing
SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
# Where to generate and name them, prefixes the path, then transforms the names to be equivalent of the .c to .o
# 	It's here morstly to just be useful and avoid having to manually type everything neat little trick
OBJ = $(addprefix $(OBJDIR)/, $(SRC:.c=.o))
HEADERS = $(INCDIR)/ft.h

# Library name
NAME = libft.a

# Rules
# Prints out the name essentially as requested
# Also first thing to happen in the pipeline so if you only run make, it'll do this
all: $(NAME)

# Runs the archiving of the previous
# The this makes it so the target (libft.a is DEPENDANT on obj, aka all the obejct files)
# Prints out the name the @ at the begining is to ensure we dont runt he name command
$(NAME): $(OBJ)
	@echo "Creating library $(NAME)..."
	ar rcs $(NAME) $(OBJ)

# Runs the actual compilation stage .c to .o
# TODO: This took a while and still needs testing but basically does the following
# Creates the .o intermediate files, by grabbing all the .c files and the headers
# 	Note: if header changes it will force a recompilation, which honestly is expected
# This uses automatic variables
#	$< - Prerequisites aka .c files
#	$@ - Target name being built aka .o file and its naming
#	$^ - All prerequisites - good for linking the .o files
#	$+ - For linkin library mostly
#	$? - For incremental builds apparently
#	There is more wild shit with wildcards and stems, but that's tomorrow me's problem
# CC is for the compiler, followed by it's flags,
#	then -I is for includes so that if you do a "include "ft.h" it'll work
#	-c is for straight compilation no added linking stage as it's a lib
#	-o $@ is for putting the result of the compilation into the object file
$(OBJDIR)/%.o: $(SRCDIR)/%.c $(HEADERS)
	@echo "Compiling $<..."
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

# Above expands to this, but you have to do it for EVERY single file which is tedious and needs maintenance
# srcs/ft_putstr.o: srcs/ft_putstr.c includes/ft.h
  #	@echo "Compiling srcs/ft_putstr.c..."
  #	$(CC) $(CFLAGS) -I includes -c srcs/ft_putstr.c -o srcs/ft_putstr.o

# Clean up obj files. Uses -f so it doesnt spout errors which can fail this
clean:
	@echo "Cleaning object files..."
	rm -f $(OBJ)

# Runs clean THEN removes the final library
fclean: clean
	@echo "Removing library $(NAME)..."
	rm -f $(NAME)

# Complete rebuild, which means we need to clean everything first before building easy peasy
re: fclean all