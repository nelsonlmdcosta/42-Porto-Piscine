/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:12:07 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 16:22:51 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

/*
 * Using write as printf doesnt always flush it's input untila  new line
 * 		so it was easier to just use write in this case
 */
int	main(void)
{
	// Test 1: Empty string
	write(1, "Test 1: ", 8);
	ft_putstr("");
	write(1, "\n", 1);

	// Test 2: Single character
	write(1, "Test 2: ", 8);
	ft_putstr("A");
	write(1, "\n", 1);

	// Test 3: Normal word
	write(1, "Test 3: ", 8);
	ft_putstr("Hello");
	write(1, "\n", 1);

	// Test 4: String with spaces and punctuation
	write(1, "Test 4: ", 8);
	ft_putstr("Hello, world!");
	write(1, "\n", 1);

	// Test 5: Long string
	write(1, "Test 5: ", 8);
	ft_putstr("This is a much longer test string to check ft_putstr.");
	write(1, "\n", 1);

	return 0;
}