/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysavalen <ysavalen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:02:14 by ysavalen          #+#    #+#             */
/*   Updated: 2024/10/01 19:34:17 by ysavalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		s1_len;
	size_t		start;
	size_t		end;
	size_t		new_len;
	char		*new;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	s1_len = ft_strlen(s1);
	while (s1[start] && ft_strchr (set, s1[start]))
		start++;
	end = s1_len - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	new_len = end - start + 1;
	new = (char *)malloc(new_len + 1);
	if (new == NULL)
		return (NULL);
	ft_memcpy(new, s1 + start, new_len);
	new[new_len] = '\0';
	return (new);
}
