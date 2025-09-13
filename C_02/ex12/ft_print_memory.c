/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:19:27 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 16:03:05 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Prints the address of at a memory pointer. Disregarding it's internals
 * That said a unsigned long in Linux is 64 bits, whilst windows its 32 ...
 * So this was an annoyance to test without using normalized size libraries
 * We just take the whole address itself (the value of the pointer) and
 * convert it to hex
 */
void	ft_print_address(void *addr)
{
	int				i;
	char			hex[16];
	unsigned long	ptr;

	i = 15;
	ptr = (unsigned long)addr;
	while (i >= 0)
	{
		hex[i] = "0123456789abcdef"[ptr % 16];
		ptr /= 16;
		i--;
	}
	write(1, hex, 16);
	write(1, ":", 1);
}

/*
 * In most memory editors hex values appead as 4 A-F digits, so we're
 * 		replicating that behaviour we prepare the chars to show and then
 * 		write them out, each set of 4 number represents 2 chars as a Hex
 * 		represents 16 bits, we need 2 to represent a 32 bit char, so 2
 * 		chars require 4 hexes.
 */
void	ft_print_hex_byte(unsigned char c, int add_space)
{
	char	*hex;
	char	out[3];

	hex = "0123456789abcdef";
	out[0] = hex[c / 16];
	out[1] = hex[c % 16];
	out[2] = ' ';
	if (add_space)
		write(1, out, 3);
	else
		write(1, out, 2);
}

/*
 * Function to specifically print out what's inside the memory space that
 * 		was passed through as characters.
 *
 * Printable Values Show Up, Otherwise Unprintable Ones, or ones that
 * 		cannot be properly interpreted as a char as shown as .
 */
void	ft_print_chars(unsigned char *data, unsigned int len)
{
	unsigned int	i;
	char			charactertoprint;

	i = 0;
	while (i < len)
	{
		charactertoprint = data[i++];
		if (charactertoprint >= 32 && charactertoprint <= 126)
			write(1, &charactertoprint, 1);
		else
			write(1, ".", 1);
	}
}

/*
 * Extracted this out to avoid the 25 line limit in the main function below
 * 		this just grabs the line, and prints out the hex byts as well as
 * 		sends a signal to add a space when needed.
 *
 * This is also where we handle the extra padding at line 103 to avoid the
 * 		information for the string section on the right drawing too far to
 * 		the left side.
 */
void	ft_print_hex_line(unsigned char *ptr, unsigned int line_length)
{
	unsigned int	j;

	j = 0;
	while (j < 16)
	{
		if (j < line_length)
			ft_print_hex_byte(ptr[j], j % 2 == 1);
		else
		{
			write(1, "  ", 2);
			if (j % 2 == 1)
				write(1, " ", 1);
		}
		j++;
	}
}

/*
 * Dump The Mermory Per Line
 *
 * It'll print out first the address on the left hand side
 *
 * It'll then proceed to draw out the memory space in Hex
 *
 * Finally it dumps the actual information in that memory region
 * 		Invalid Characters Are Just Shown As "."
 *
 * It then increments 16 bytes forwards to get the next chunk of
 * 		memory to dump into the terminal
 */
void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	line_length;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)addr;
	while (i < size)
	{
		if (size - i >= 16)
			line_length = 16;
		else
			line_length = size - i;
		ft_print_address(ptr + i);
		write(1, " ", 1);
		ft_print_hex_line(ptr + i, line_length);
		ft_print_chars(ptr + i, line_length);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}

/*
int main(void)
{
	char data[] = "Hello, World!\nThis is a test of ft_print_memory .";
	ft_print_memory(data, sizeof(data) - 1);
	return 0;
}*/