/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logname <logname@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 08:24:35 by logname           #+#    #+#             */
/*   Updated: 2025/09/09 15:39:20 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void ft_putnbr(int nb);

int main()
{
	ft_putnbr(42);
	write(1, "\n", 1);

	ft_putnbr(INT_MIN);
	write(1, "\n", 1);

	ft_putnbr(INT_MAX);
	write(1, "\n", 1);

	ft_putnbr(0);
	write(1, "\n", 1);

	ft_putnbr(-124);
	write(1, "\n", 1);

	ft_putnbr(1024);

	return 0;
}