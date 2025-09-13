/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex06.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:17:45 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/02 20:39:27 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
    printf("%d", ft_str_is_printable("ASDSAFS"));
    printf("%d", ft_str_is_printable("!d123 "));
    printf("%d", ft_str_is_printable("123sad{}}"));
    printf("%d", ft_str_is_printable(""));
    printf("%d", ft_str_is_printable("ASadsaS"));

    char specialtest[3];
    specialtest[0] = 12;
    specialtest[1] = 0;
    specialtest[2] = 48;
    printf("%d", ft_str_is_printable(specialtest));


    return 0;
}
