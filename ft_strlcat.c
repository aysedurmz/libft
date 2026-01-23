/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysdurma <aysdurma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:01:23 by aysdurma          #+#    #+#             */
/*   Updated: 2026/01/22 15:10:49 by aysdurma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len1;
	size_t	len2;
	size_t	i;

	len2 = ft_strlen(src);
	len1 = 0;
	while (len1 < size && dst[len1])
		len1++;
	if (len1 == size)
		return (size + len2);
	i = 0;
	while (src[i] && len1 + i + 1 < size)
	{
		dst[len1 + i] = src[i];
		i++;
	}
	if (len1 < size)
		dst[len1 + i] = '\0';
	return (len1 + len2);
}
