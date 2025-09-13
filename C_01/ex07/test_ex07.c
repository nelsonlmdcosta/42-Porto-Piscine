/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex07.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:56:16 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:47:39 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size);

void    printarray(int *array, int size)
{
    int iterator;

    iterator = 0;
    while (iterator < size)
    {
        printf("%d",  array[iterator++]);
    }
    printf("\n");
}

int main()
{
    int inputoddtotal[] = { 5, 4, 3, 2, 1 };
    int inputeventotal[] = { 4, 3, 2, 1 };

    printarray(inputoddtotal, 5);
    ft_rev_int_tab(inputoddtotal, 5);
    printarray(inputoddtotal, 5);

    printarray(inputeventotal, 4);
    ft_rev_int_tab(inputeventotal, 4);
    printarray(inputeventotal, 4);

}