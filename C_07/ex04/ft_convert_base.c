/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 13:30:43 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/13 13:30:46 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

static int	check_base(char *base)
{
	int i, j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || is_space(base[i]))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	base_index(char c, char *base)
{
	int i = 0;

	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

static int	ft_atoi_base(char *str, char *base)
{
	int i = 0, sign = 1, nb = 0, idx, blen = ft_strlen(base);

	while (is_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while ((idx = base_index(str[i], base)) != -1)
	{
		nb = nb * blen + idx;
		i++;
	}
	return (nb * sign);
}

static int	ft_nbrlen_base(int nbr, char *base)
{
	int blen = ft_strlen(base);
	int len = (nbr <= 0);

	while (nbr)
	{
		nbr /= blen;
		len++;
	}
	return (len);
}

static char	*ft_itoa_base(int nbr, char *base)
{
	int		blen = ft_strlen(base);
	int		len = ft_nbrlen_base(nbr, base);
	char	*str;
	long	n = nbr; // use long for -2147483648
	int		i;

	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	i = len - 1;
	if (n == 0)
		str[0] = base[0];
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[i--] = base[n % blen];
		n /= blen;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int value;

	if (!check_base(base_from) || !check_base(base_to))
		return (NULL);
	value = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(value, base_to));
}
