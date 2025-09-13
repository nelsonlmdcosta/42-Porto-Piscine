/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:17:45 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/04 18:16:30 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
    printf("%d\n", ft_str_is_alpha("asdafasfsa"));
    printf("%d\n", ft_str_is_alpha("!dasd "));
    printf("%d\n", ft_str_is_alpha("sad{}}"));
    printf("%d\n", ft_str_is_alpha(""));

    return 0;
}
