/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrief <rkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:06:07 by rkrief            #+#    #+#             */
/*   Updated: 2017/11/07 18:25:19 by rkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void		ft_cat(char *filename)
{
	int		fd;
	int		readed;
	int		tab[2048];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		write(1, "This file can't be read.\n", 26);
		return ;
	}
	while ((readed = read(fd, tab, 2048)) > 0)
		write(1, tab, readed);
	close(fd);
}

int			main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	ft_cat(argv[1]);
	return (0);
}
