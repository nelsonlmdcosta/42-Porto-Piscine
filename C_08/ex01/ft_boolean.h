/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 12:06:59 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/14 20:38:43 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

/*
 * Defines that were built to help With Booleans Also included UNISTD as we
 * 		will need it to print out the messages
 *
 * 	Finally an enum for a boolean, which seems ok for now, just gives a
 * 		numeric value to FALSE and TRUE so we can use them in the conditions
 * 		whilst keeping it verbose which is nice
 */
# define EVEN(nbr) ((nbr) % 2 == 0)
# define SUCCESS 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG  "I have an odd number of arguments.\n"

# include <unistd.h>

typedef enum s_bool
{
	FALSE = 0,
	TRUE = 1
}	t_bool;

#endif