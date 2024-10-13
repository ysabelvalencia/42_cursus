/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysavalen <ysavalen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 20:37:55 by ysavalen          #+#    #+#             */
/*   Updated: 2024/10/13 20:52:04 by ysavalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_split(char **split, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free (split[i]);
		i++;
	}
	free(split);
}

static size_t	ft_count_substring(char const *s, char c)
{
	size_t	count;
	int		in_substring;

	count = 0;
	in_substring = 0;
	while (*s)
	{
		if (*s != c && !in_substring)
		{
			in_substring = 1;
			count++;
		}
		else if (*s == c)
			in_substring = 0;
		s++;
	}
	return (count);
}

static int	ft_divide_words(char const *s, char c, char **split)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			split[i] = ft_substr(s, 0, len);
			if (!split[i])
			{
				ft_free_split(split, i);
				return (0);
			}
			i++;
			s += len;
		}
		else
			s++;
	}
	split[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**substrings;

	if (!s)
		return (NULL);
	word_count = ft_count_substring(s, c);
	substrings = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!substrings)
		return (NULL);
	if (!ft_divide_words(s, c, substrings))
		return (NULL);
	return (substrings);
}
