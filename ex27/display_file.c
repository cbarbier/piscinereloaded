/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diplay_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:26:59 by cbarbier          #+#    #+#             */
/*   Updated: 2016/11/03 11:44:58 by cbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putstr_fd(char *str, int fd)
{
	while (*str)
		write(fd, str++, 1);
}

void	display_file(char *filename)
{
	int		fd;
	int		ret;
	char	buffer[100];

	if ((fd = open(filename, O_RDONLY)) < 0)
		return ;
	while ((ret = read(fd, buffer, 99)) > 0)
	{
		buffer[ret] = 0;
		ft_putstr_fd(buffer, 1);
	}
	if (close(fd) < 0)
		return ;
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		ft_putstr_fd("File name missing.\n", 2);
	else if (argc > 2)
		ft_putstr_fd("Too many arguments.\n", 2);
	else
		display_file(argv[1]);
	return (0);
}
