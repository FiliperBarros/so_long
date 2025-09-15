/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 16:13:52 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/15 11:45:55 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	is_valid_filename(char *filename)
{
	int	i;

	i = ft_strlen(filename);
	if(ft_strlen(filename) <= 4)
		exit_error("Please, insert a valid file\n");
	if(ft_strncmp(filename + i - 4, ".ber", 4))
		exit_error("the filme must be <filename.ber>\n");
}
int	main(int ac, char **argv)
{
	if (ac != 2)
		exit_error("Usage: ./solong <map.name.ber");
	is_valid_filename(argv[1]);
	return (0);
}