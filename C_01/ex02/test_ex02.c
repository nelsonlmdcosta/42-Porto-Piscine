/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:56:24 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:51:31 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int* a, int* b);

int main()
{
    int a = 1;
    int b = 2;

    printf("A: %d\n", a);
    printf("B: %d\n", b);

    ft_swap(&a, &b);

    printf("A: %d\n", a);
    printf("B: %d\n", b);

    return 0;
}