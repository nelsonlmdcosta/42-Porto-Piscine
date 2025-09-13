/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:38:44 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:47:18 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Reverse Integer Array Just MIrrors The Index And Swaps The Two Around
 */
void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	totaliterations;
	int	tempvalue;
	int	*data1;
	int	*data2;

	counter = 0;
	totaliterations = size / 2;
	while (counter < totaliterations)
	{
		data1 = (tab + counter);
		data2 = (tab + size - counter - 1);
		tempvalue = *data1;
		*data1 = *data2;
		*data2 = tempvalue;
		++counter;
	}
}

/*
#include <stdio.h>

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

}*/