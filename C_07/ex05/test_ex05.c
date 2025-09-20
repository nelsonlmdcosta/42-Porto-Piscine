/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:50:05 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/15 21:27:18 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char **ft_split(char *str, char *charset);

int main(void)
{
	char** splitstrings = ft_split(",,hello,,world", ",");//"This-Is/A Test|Split|string", "-/|");

	int splitstrcounter = 0;
	while(*(splitstrings + splitstrcounter) != NULL)
	{
		char* stringtoprint = *(splitstrings + splitstrcounter);
		printf("%s\n", stringtoprint);
		++splitstrcounter;
	}
}
