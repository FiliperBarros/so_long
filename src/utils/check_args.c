/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 14:59:20 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/17 16:34:23 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_args(int ac, char **argv)
{
	if (ac != 2)
		exit_error("Usage: ./solong <map_name.ber", NULL);
	check_filename(argv[1]);
}