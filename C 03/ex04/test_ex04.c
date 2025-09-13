/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 19:27:47 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 16:06:43 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char text[] = "Hello, world!";
	char *res;

	res = ft_strstr(text, "world");
	if (res)
		printf("Found: \"%s\"\n", res);
	else
		printf("Not found\n");

	res = ft_strstr(text, "Hello");
	if (res)
		printf("Found: \"%s\"\n", res);

	res = ft_strstr(text, "");
	if (res)
		printf("Empty search returns: \"%s\"\n", res);

	res = ft_strstr(text, "42");
	if (res)
		printf("Found: \"%s\"\n", res);
	else
		printf("Not found\n");


	res = strstr(text, "42");
	if (res)
		printf("Found: \"%s\"\n", res);
	else
		printf("Not found\n");

	return 0;
}