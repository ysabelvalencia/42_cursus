/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysavalen <ysavalen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:29:06 by ysavalen          #+#    #+#             */
/*   Updated: 2024/10/02 19:17:49 by ysavalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_copy;
	size_t	s_len;

	s_len = ft_strlen(s);
	s_copy = malloc(s_len + 1);
	if (!s_copy)
		return (NULL);
	ft_memcpy(s_copy, s, s_len);
	s_copy[s_len] = '\0';
	return (s_copy);
}
