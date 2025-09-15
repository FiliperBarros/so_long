/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_filename.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:38:57 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/15 16:39:18 by frocha-b         ###   ########.fr       */
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
		exit_error("Please, insert a file named <map_name.ber>\n");
}
