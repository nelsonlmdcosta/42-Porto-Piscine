/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex07.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:17:45 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/02 20:50:04 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
    char mutablestring1[] = "123sad{}}";
    char mutablestring2[] = "";
    char mutablestring3[] = "ASadsaS";

    printf("%s", ft_strupcase(mutablestring1));
    printf("%s", ft_strupcase(mutablestring2));
    printf("%s", ft_strupcase(mutablestring3));

    return 0;
}
