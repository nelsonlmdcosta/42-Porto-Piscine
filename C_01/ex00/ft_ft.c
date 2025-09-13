/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:11:44 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:53:29 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Applies the Number 42 to a dereferenced pointer aka changing the value of
 * what it's pointing to.
 */
void	ft_ft(int *nbr)
{
	*(nbr) = 42;
}

/*
#include <stdio.h>

int main()
{
	int someinteger;

	someinteger = 42069;

	printf("%d\n", someinteger);;
	ft_ft(&someinteger);
	printf("%d\n", someinteger);;

	return 0;
}*/