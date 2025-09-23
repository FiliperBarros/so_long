/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_to_inline.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:43:30 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/23 14:12:58 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*file_to_inline(char *filename)
{
	int		fd;
	char	*in_line_file;
	char	*line;
	char	*temp;

	fd = open(filename, O_RDONLY);
	if (!fd)
		exit_error("File missing or access denied", NULL);
	line = get_next_line(fd);
	if (!ft_strclen(line, '\n'))
	{
		free(line);
		exit_error("Empty map.", NULL);
	}
	temp = ft_strdup("");
	while (line)
	{
		in_line_file = ft_strjoin(temp, line);
		free(temp);
		temp = in_line_file;
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (in_line_file);
}
