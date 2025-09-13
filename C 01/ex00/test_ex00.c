/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:56:04 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/02 17:13:47 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ft(int* nbr);

int main()
{
    int someinteger;

    someinteger = 42069;

    printf("%d\n", someinteger);;
    ft_ft(&someinteger);
    printf("%d\n", someinteger);;

    return 0;
}