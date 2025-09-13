/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 14:19:12 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/08/30 16:25:09 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	getcharat(int X, int Y, int MaxX, int MaxY)
{
	if (X == 0 && Y == 0)
		return ('A');
	if (X == MaxX - 1 && Y == 0)
		return ('C');
	if (X == 0 && Y == MaxY - 1)
		return ('A');
	if (X == MaxX - 1 && Y == MaxY - 1)
		return ('C');
	if (Y == 0 || Y == MaxY - 1)
		return ('B');
	if (X == 0 || X == MaxX - 1)
		return ('B');
	return (' ');
}

int	rush(int x, int y)
{
	int	currentx;
	int	currenty;

	currentx = 0;
	currenty = 0;
	while (currenty < y)
	{
		while (currentx < x)
		{
			ft_putchar(getcharat(currentx, currenty, x, y));
			if (currentx == x - 1)
			{
				ft_putchar('\n');
			}
			++currentx;
		}
		++currenty;
		currentx = 0;
	}
	return (0);
}
