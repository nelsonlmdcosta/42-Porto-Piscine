/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:12:23 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 17:18:42 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
void ft_putstr(char *str);
void ft_putnbr(int nb);
int ft_atoi(char *str);

int main(void)
{
	char *tests[] =
	{
			"42",
			"   42",
			"   -42",
			"++42",
			"--42",
			"+-+-42",
			"   +--+123abc456",
			"0",
			"-0",
			"   2147483647",
			"   -2147483648",
			"   0000123",
			"   -0000123",
			"abc123",
			""
	};

	for (unsigned long long t = 0; t < sizeof(tests)/sizeof(tests[0]); t++)
	{
		ft_putstr("Test: \"");
		ft_putstr(tests[t]);
		ft_putstr("\" -> ");
		ft_putnbr(ft_atoi(tests[t]));
		ft_putchar('\n');
	}

	return 0;
}