/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex06.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:56:18 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:47:51 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_strlen(char* str);

int main()
{
    char* string1 = "Hello World!";
    char* string2 = "What A Great Day It Is Today!!";
    char* string3 = "Bye!";

    printf("String: %s, Has Length of: %d\n", string1, ft_strlen(string1));
    printf("String: %s, Has Length of: %d\n", string2, ft_strlen(string2));
    printf("String: %s, Has Length of: %d\n", string3, ft_strlen(string3));
}
