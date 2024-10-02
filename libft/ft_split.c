/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysavalen <ysavalen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 20:37:55 by ysavalen          #+#    #+#             */
/*   Updated: 2024/10/02 19:10:48 by ysavalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "libft.h"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	size_t	s_len;
	size_t	i;
	size_t	start;
	size_t	sub_index;
	size_t	num_subtrings;
	char	**result;
	char	*substring;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	i = 0;
	while (i <= s_len)
	{
		if (s[i] != c && s[i] != '\0')
		{
			if (i = 0 || s[i - 1] == c)
				start = i;
		}
		else
		{
			if (i > 0 && s[i - 1] != c)
			{

			}
		}
		i++;
	}	
}
*/
