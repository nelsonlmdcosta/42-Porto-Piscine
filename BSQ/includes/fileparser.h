/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileparser.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 10:21:13 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/17 10:54:04 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEPARSER_H
# define FILEPARSER_H

t_mapdata ParseFromFile(char* filepath);

t_mapdata ParseFromCMD();

#endif