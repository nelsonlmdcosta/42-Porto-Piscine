/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:04:02 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:51:14 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Applies the value of the division to a dereferenced pointer
 * Applies the value of the mod to the dereferenced pointer
 */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int main()
{
	int divisionresult;
	int moduloresult;

	ft_div_mod(10, 2, &divisionresult, &moduloresult);
	printf("10, 2 - Division result: %d, Modulo Result: %d \n",
 divisionresult, moduloresult);

	ft_div_mod(5, 2, &divisionresult, &moduloresult);
	printf("5, 2 - Division result: %d, Modulo Result: %d \n",
 divisionresult, moduloresult);

	ft_div_mod(20, 5, &divisionresult, &moduloresult);
	printf("20, 5 - Division result: %d, Modulo Result: %d \n",
 divisionresult, moduloresult);

	ft_div_mod(22, 5, &divisionresult, &moduloresult);
	printf("22, 5 - Division result: %d, Modulo Result: %d \n",
 divisionresult, moduloresult);

	return 0;
}*/