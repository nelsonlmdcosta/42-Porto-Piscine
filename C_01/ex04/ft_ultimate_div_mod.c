/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:26:08 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:49:46 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Applies the value of the divided dereferenced pointers and mod of the pointers
 * 		back into the pointers themselves
 */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divisionresult;
	int	moduloresult;

	divisionresult = *a / *b;
	moduloresult = *a % *b;
	*a = divisionresult;
	*b = moduloresult;
}

/*
#include <stdio.h>

int main()
{
	int a;
	int b;

	a = 10;
	b = 5;

	printf("a = %d, b = %d \n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d, b = %d \n", a, b);

	a = 10;
	b = 6;

	printf("a = %d, b = %d \n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d, b = %d \n", a, b);

	return 0;
}*/