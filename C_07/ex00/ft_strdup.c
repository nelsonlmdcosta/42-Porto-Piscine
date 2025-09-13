/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:32:19 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/12 10:53:28 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(const char *string)
{
    int counter;

    counter = 0;
    while(*(string + counter) != '\0')
        counter++;
    return counter;
}

char *ft_strdup(char *src)
{
    int     length;
    int     counter;
    char*   buffer;

    counter = 0;
    length = ft_strlen(src) + 1;
    buffer = malloc(sizeof(char) * length);
    if(!buffer)
    {
        return 0;
    }

    while(counter < length)
    {
        *(buffer + counter) = *(src + counter);
        ++counter;
    }

    return buffer;
}