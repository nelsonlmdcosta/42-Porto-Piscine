/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 19:51:49 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 20:14:46 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *	From people smarter than myself, a divisor for a prime number can only found
 *		when less than the Square Root of the number itself.
 *
 *	So taking that into consideration, we start from 2 and work up towards the
 *		upper limit. This upper limit is the sqrt of the number. So we start
 *		squaring the number upwards until we reach above the target number
 *
 * 	Taking that into consideration we then do a modulo, if it's 0 it's a valid
 * 		divisor therefore a combination for dividing the number aka NOT a prime
 *
 * 	Otherwise if it survives the while loop it is the prime!
 *
 * 	Some people are so smort ...
 *
 *	Sauce:
 *	https://tinyurl.com/geek4g
 *	https://tinyurl.com/primeoverflow
 */
int	ft_is_prime(int nb)
{
	int	divisor;
	int	remainder;

	if (nb <= 1)
		return (0);
	divisor = 2;
	while (divisor * divisor <= nb)
	{
		remainder = nb % divisor;
		if (remainder == 0)
			return (0);
		divisor++;
	}
	return (1);
}
