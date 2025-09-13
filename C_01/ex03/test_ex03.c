/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:56:23 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/02 18:13:39 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int* div, int* mod);

int main()
{
    int divisionresult;
    int moduloresult;

    ft_div_mod(10, 2, &divisionresult, &moduloresult);
    printf("10, 2 - Division result: %d, Modulo Result: %d \n", divisionresult, moduloresult);

    ft_div_mod(5, 2, &divisionresult, &moduloresult);
    printf("5, 2 - Division result: %d, Modulo Result: %d \n", divisionresult, moduloresult);

    ft_div_mod(20, 5, &divisionresult, &moduloresult);
    printf("20, 5 - Division result: %d, Modulo Result: %d \n", divisionresult, moduloresult);

    ft_div_mod(22, 5, &divisionresult, &moduloresult);
    printf("22, 5 - Division result: %d, Modulo Result: %d \n", divisionresult, moduloresult);

    return 0;
}