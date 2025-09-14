/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 12:05:48 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/14 20:36:39 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

/*
 * As it requests just forward declaring these in the .h file to include
 * 		elsewhere, let's see if it's ok :p Also has a header guard to
 * 		protect agaist cyclical dependencies and multiple declarations
 * 		etc that can arise from having header files
 */
void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

#endif