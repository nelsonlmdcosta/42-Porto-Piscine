/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex12.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:17:45 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/08 17:21:54 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_print_memory(void *addr, unsigned int size);

int main(void)
{
    char data[] = "Hello, World!\nThis is a test of ft_print_memory .";
    ft_print_memory(data, sizeof(data) - 1);
    return 0;
}
