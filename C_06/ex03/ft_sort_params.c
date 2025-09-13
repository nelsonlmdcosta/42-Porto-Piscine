/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:03:21 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:16:26 by nluis-mo         ###   ########.fr       */
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
 * Copied form C_03 no need to reinvent the wheel
 * Compares 2 strings
 */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*(s1 + i) && *(s2 + i) && *(s1 + i) == *(s2 + i))
		i++;
	return (*(s1 + i) - *(s2 + i));
}

/*
 * Bubble sort for each argument, just the easiest to implement
 *
 * It then Prints Them All Out
 */
int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			++j;
		}
		++i;
	}
	i = 1;
	while (i < argc)
		writestring(argv[i++]);
	return (0);
}
