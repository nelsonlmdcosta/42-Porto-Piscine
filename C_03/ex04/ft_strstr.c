/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 21:41:02 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 16:07:04 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Comparison done here to avoid the max line of norminette.
 */
int	chars_equal(char *str, char *to_find, int str_index, int needle_index)
{
	return (*(to_find + needle_index) != '\0'
		&& *(str + str_index + needle_index) == *(to_find + needle_index));
}

/*
 * Helper Function To Help With Checking That A String is Indeed inside Another
 * 		Character By Character
 */
int	startswith(char *haystack, char *needle, int haystackindex)
{
	int	needleindex;

	needleindex = 0;
	while (chars_equal(haystack, needle, haystackindex, needleindex))
		needleindex++;
	return (*(needle + needleindex) == '\0');
}

/*
 * As per the man page, takes in a haystack (str) and a needle (to_find)
 * This returns a "haystack", if the "needle" is empty, otherwise returns
 * the pointer of the string at the given location.
 * Otherwise null if nothing is found
 */
char	*ft_strstr(char *str, char *to_find)
{
	int	str_index;

	if (*to_find == '\0')
		return (str);
	str_index = 0;
	while (*(str + str_index) != '\0')
	{
		if (startswith(str, to_find, str_index))
			return (str + str_index);
		++str_index;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

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
}*/