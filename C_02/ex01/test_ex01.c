/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:17:45 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/04 18:11:05 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    int totalstringtocopy = 5;
    char src[] = "Hello World!";
    char dest[totalstringtocopy + 1];

    printf("%s\n", src);
    printf("%s\n", dest);

    ft_strncpy(dest, src+9, totalstringtocopy);

    printf("%s\n", src);
    printf("%s\n", dest);

    return 0;
}
