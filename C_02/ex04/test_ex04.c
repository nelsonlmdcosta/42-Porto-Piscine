/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:17:45 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/02 20:32:43 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
    printf("%d", ft_str_is_lowercase("adasdsad"));
    printf("%d", ft_str_is_lowercase("!d123 "));
    printf("%d", ft_str_is_lowercase("123sad{}}"));
    printf("%d", ft_str_is_lowercase(""));
    printf("%d", ft_str_is_lowercase("ASadsaS"));

    return 0;
}
