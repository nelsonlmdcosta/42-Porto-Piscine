/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:56:21 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/02 18:27:30 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int* a, int* b);

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
}