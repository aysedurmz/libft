/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysdurma <aysdurma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 09:04:20 by aysdurma          #+#    #+#             */
/*   Updated: 2026/01/23 09:08:03 by aysdurma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*buffer;

	total = nmemb * size;
	buffer = (void *)malloc(total);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, total);
	return (buffer);
}