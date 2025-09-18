/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:10:51 by frocha-b          #+#    #+#             */
/*   Updated: 2025/09/17 12:55:58 by frocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*array;
	size_t	len;

	len = n * size;
	array = malloc (len);
	if (!array)
		return (NULL);
	ft_bzero((array), len);
	return (array);
}
