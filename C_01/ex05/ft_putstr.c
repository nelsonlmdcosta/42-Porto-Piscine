/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:28:29 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:49:20 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Prints out a full c-style string to the console
 */
void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		++counter;
	}
	write(1, str, counter);
}

/*
int main()
{
	ft_putstr("Hello World!");

	return 0;
}*/