/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapdata.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:26:01 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/17 10:58:32 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAPDATA_H
# define MAPDATA_H

#include "point.h"

/*
 *	Structure That Holds Onto Map Data, This Structure Should Always Be Valid In
 *		The Final Project When Being Used And is An Expected Return Value From
 *		The Parsing Functions
 */
typedef struct s_mapdata
{
	char** MapData;
	t_point Dimensions;

	char EmptySpot;
	char Obstacle;
	char Solution;
}	t_mapdata;

#endif