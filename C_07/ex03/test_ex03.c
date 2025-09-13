/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:50:05 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/12 12:19:39 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(int argc, char** argv)
{
    char* buffer = ft_strjoin(argc, argv, ", ");
    printf("Concatenated Input: %s\n", buffer);
    return 0;
}
