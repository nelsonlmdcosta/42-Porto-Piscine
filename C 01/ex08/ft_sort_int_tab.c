/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:52:44 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:40:46 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Bubble Sort Implementation To Sort Integers In An Array, Not the Most
 * 		Efficient But Easiest To Describe
 *
 * 	Pass is just an index from the start to the end of where we are in our
 * 		sorting index. This ensures we start at the beginning and check
 * 		everything right to the end.
 *
 * 	Comparison index is where in the chain of comparisons we are, it's what
 * 		lets us move a digit from where it is to where it needs to be. This
 * 		is done by swapping it with a neighbour.
 */
void	ft_sort_int_tab(int *tab, int size)
{
	int	pass_index;
	int	comparison_index;
	int	temporary_swap_value;

	pass_index = 0;
	while (pass_index < size - 1)
	{
		comparison_index = 0;
		while (comparison_index < size - pass_index - 1)
		{
			if (tab[comparison_index] > tab[comparison_index + 1])
			{
				temporary_swap_value = tab[comparison_index];
				tab[comparison_index] = tab[comparison_index + 1];
				tab[comparison_index + 1] = temporary_swap_value;
			}
			comparison_index++;
		}
		pass_index++;
	}
}

/*
#include <stdio.h>

int main()
{
	int arr[] = {5, 2, 9, 1, 7, 3, 8};
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("Original array: ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	ft_sort_int_tab(arr, n);

	printf("Sorted array:   ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}*/
