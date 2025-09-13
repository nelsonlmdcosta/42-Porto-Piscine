/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:17:45 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 15:54:29 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
    char src[] = "Hello World!";
    char dest[256];

    printf("%s\n", src);
    printf("%s\n", dest);

    ft_strcpy(dest, src);

    printf("%s\n", src);
    printf("%s\n", dest);

    printf("%s\n", *(dest + 13) == '\0' ? "Yes" : "No");
    return 0;
}
