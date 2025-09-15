/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:03:21 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/15 15:46:57 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 *	Turns Out This Is Redundant, So No Point This Being Here
 *
 * Find The Last Instance Of The Token, Technically We Can Start From The Back
 * 		But As Nothing Has Been About Efficiency I've Left it As Is
 */
char	*find_character_after_token(char *str, char tokentofind)
{
	char	*lastinstance;

	lastinstance = NULL;
	while (*str)
	{
		if (*str == tokentofind)
			lastinstance = str + 1;
		++str;
	}
	return (lastinstance);
}

/*
 * Cast The Argc Is To Get Away From The Pesky Compliation Issues
 *
 * We Find The Last Instance Of \ Then Print Everything Else
 */
int	main(int argc, char *argv[])
{
	char	*programname;

	(void)argc;
	programname = argv[0];
	while (*programname != '\0')
		write(1, programname++, 1);
	write(1, "\n", 1);
	return (0);
}
