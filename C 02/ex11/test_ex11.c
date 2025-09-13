/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex11.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:17:45 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/09 16:01:32 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putstr_non_printable(char *str);

int main(void)
{
    char str[] = "Hello\nHow are you?";
    ft_putstr_non_printable(str);
    return 0;
}
