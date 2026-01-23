/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysdurma <aysdurma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 08:34:04 by aysdurma          #+#    #+#             */
/*   Updated: 2026/01/23 08:40:50 by aysdurma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*x;
	size_t			i;

	i = 0;
	x = (unsigned char *)s;
	while (i < n)
	{
		if (x[i] == (unsigned char)c)
			return (x + i);
		i++;
	}
	return (NULL);
}
