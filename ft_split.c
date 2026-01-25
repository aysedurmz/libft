/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysdurma <aysdurma@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 21:03:52 by aysdurma          #+#    #+#             */
/*   Updated: 2026/01/25 21:15:59 by aysdurma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	**ft_free_all(char **arr, int i)
{
	while (i > 0)
	{
		i--;
		free(arr[i]);
	}
	free(arr);
	return (NULL);
}

static char	*ft_fill_arr(const char *s, int start, int finish)
{
	char	*word;
	int		i;

	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < finish)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static char	**ft_perform_split(char const *s, char c, char **split)
{
	int	i;
	int	j;
	int	index;
	int	len;

	i = 0;
	j = 0;
	index = -1;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == len) && index >= 0)
		{
			split[j++] = ft_fill_arr(s, index, i);
			if (!split[j - 1])
				return (ft_free_all(split, j - 1));
			index = -1;
		}
		i++;
	}
	split[j] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	return (ft_perform_split(s, c, split));
}
