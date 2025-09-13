/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:30:21 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/12 10:44:53 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(char *src);

int main(int argc, char *argv[])
{
    (void)argc;
    (void)argv;
    char* ToPrint = ft_strdup("hello world!");
    printf("%s", ToPrint);
    *(ToPrint) = 'H';
    printf("%s", ToPrint);
    free(ToPrint);

    return 0;
}