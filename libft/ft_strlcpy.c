/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysavalen <ysavalen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:01:49 by ysavalen          #+#    #+#             */
/*   Updated: 2024/09/24 11:45:39 by ysavalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stddef.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (destsize == 0)
		return (0);
	i = 0;
	while (i + 1 < destsize && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}