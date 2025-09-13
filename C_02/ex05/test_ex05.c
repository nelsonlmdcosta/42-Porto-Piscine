/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:17:45 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/02 20:34:12 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
    printf("%d", ft_str_is_uppercase("ASDSAFS"));
    printf("%d", ft_str_is_uppercase("!d123 "));
    printf("%d", ft_str_is_uppercase("123sad{}}"));
    printf("%d", ft_str_is_uppercase(""));
    printf("%d", ft_str_is_uppercase("ASadsaS"));

    return 0;
}
