/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:50:05 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/12 11:17:06 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:50:05 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/12 11:11:26 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
    int* range1;
    int range1len = ft_ultimate_range(&range1, 2, 5);
    int* range2;
    int range2len = ft_ultimate_range(&range2, -1, 3);
    int* range3;
    int range3len = ft_ultimate_range(&range3, 0, 10);

    int counter = 0;
    while(counter < range1len)
    {
        printf("Array1[%d] - %d\n", counter, *(range1 + counter));
        ++counter;
    }

    counter = 0;
    while(counter < range2len)
    {
        printf("Array1[%d] - %d\n", counter, *(range2 + counter));
        ++counter;
    }

    counter = 0;
    while(counter < range3len)
    {
        printf("Array1[%d] - %d\n", counter, *(range3 + counter));
        ++counter;
    }
    return 0;
}
