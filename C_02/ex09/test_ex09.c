/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex09.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:17:45 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/02 20:53:13 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str);

int main(void)
{
    char str[] = "hi, how are you? 42words forty-two; fifty+and+one";

    printf("%s\n", ft_strcapitalize(str));

    return 0;
}
