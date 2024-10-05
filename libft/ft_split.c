/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysavalen <ysavalen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 20:37:55 by ysavalen          #+#    #+#             */
/*   Updated: 2024/10/05 18:03:08 by ysavalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count_substring(char const *s, char c)
{
	int	count;
	int	in_substring;

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
			in_subtring = 0;
		s++;
	}
	return (count);
}

static char	*ft_malloc_word(char const *s, char c)
{
	char	*word;
	int		len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	len = 0;
	while (s[len] && s[len] != c)
	{
		word[len] = s[len];
		len++;
	}
	word[len] = '\0';
	return (word);
}

static void	free_split(char **split, int i)
{
	while (i > 0)
	{
		free (split[i - 1]);
		i--;
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	return (0);	
}
