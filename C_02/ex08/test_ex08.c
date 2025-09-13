/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex08.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:17:45 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/02 20:51:45 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
    char mutablestring1[] = "123sad{}}";
    char mutablestring2[] = "";
    char mutablestring3[] = "ASadsaS";

    printf("%s", ft_strlowcase(mutablestring1));
    printf("%s", ft_strlowcase(mutablestring2));
    printf("%s", ft_strlowcase(mutablestring3));

    return 0;
}
