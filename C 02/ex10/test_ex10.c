/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:17:45 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 16:01:08 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
    char src[] = "Hello, World!";
    char dest[10];
    unsigned int len;

    len = ft_strlcpy(dest, src, 10);

    printf("Copied string: %s\n", dest);
    printf("Length of dest: %d\n", 10);
	printf("Length of src: %u\n", len);
	printf("Copied from src: %d\n", 10);

    return 0;
}
