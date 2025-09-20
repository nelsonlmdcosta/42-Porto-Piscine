/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluis-mo <nluis-mo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 22:37:34 by nluis-mo          #+#    #+#             */
/*   Updated: 2025/09/15 22:44:23 by nluis-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

void	ft_putstr_err(char *str)
{
	while (*str)
		write (2, str++ , 1);
}

int	main(int argc, char **argv)
{
    int		fd
	int		ret;
    char	buffer[BUF_SIZE];

    if (argc < 2)
	{
		ft_putstr_err("File name missing.\n");
		return (1);
	}
    if (argc > 2)
	{
		ft_putstr_err("Too many arguments.\n");
		return (1);
	}
    fd=open(argv[1],O_RDONLY);
    if (fd < 0)
	{
		ft_putstr_err("Cannot read file.\n");
		return (1);
	}
    while ((ret = read(fd,buffer,BUF_SIZE)) > 0)
		write(1,buffer,ret);
    if (ret < 0)
		ft_putstr_err("Cannot read file.\n");
    close(fd);
    return (0);
}
