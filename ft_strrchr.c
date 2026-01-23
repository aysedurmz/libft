/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysdurma <aysdurma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:35:09 by aysdurma          #+#    #+#             */
/*   Updated: 2026/01/23 08:12:46 by aysdurma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			len;
	unsigned char	ch;

	ch = (unsigned char)c;
	len = ft_strlen(s);
	while (1)
	{
		if ((unsigned char)s[len] == ch)
			return ((char *)(s + len));
		if (len == 0)
			break ;
		len--;
	}
	return (NULL);
}
