/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:27:36 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/18 13:31:43 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

/*
 *	Helper Structure To Aid In Defining Pointers, This Is Mostly To Deal With
 *		2D Coordinates In A Clean Way
 */
typedef struct s_point
{
	int X;
	int Y;
}	t_point;

#endif