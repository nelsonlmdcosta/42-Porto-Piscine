/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:03:02 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:08:01 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Outputs A String To The Console With A Newline Attached
 */
void	writestring(const char *stringtowrite)
{
	int	length;

	length = 0;
	while (*(stringtowrite + length) != '\0')
		++length;
	write(1, stringtowrite, length);
	write(1, "\n", 1);
}

/*
 * Prints All Arguments In Reverse Order To The Terminal Followed By A Newline
 */
int	main(int argc, char *argv[])
{
	int	counter;

	counter = argc - 1;
	while (counter > 0)
		writestring(argv[counter--]);
	return (0);
}
