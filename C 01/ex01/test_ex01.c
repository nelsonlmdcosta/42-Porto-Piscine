/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:56:10 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:52:04 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void ft_ultimate_ft(int********* nbr);

int main()
{
    int someinteger;

    int* indirection0;
    int** indirection1;
    int*** indirection2;
    int**** indirection3;
    int***** indirection4;
    int****** indirection5;
    int******* indirection6;
    int******** indirection7;
    int********* indirection8;

    someinteger = 42069;

    indirection0 = &someinteger;
    indirection1 = &indirection0;
    indirection2 = &indirection1;
    indirection3 = &indirection2;
    indirection4 = &indirection3;
    indirection5 = &indirection4;
    indirection6 = &indirection5;
    indirection7 = &indirection6;
    indirection8 = &indirection7;

    printf("%d\n", someinteger);
    ft_ultimate_ft( indirection8 );
    printf("%d\n", someinteger);

    return 0;
}