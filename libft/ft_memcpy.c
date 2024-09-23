/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysavalen <ysavalen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 00:27:26 by ysavalen          #+#    #+#             */
/*   Updated: 2024/09/23 16:54:59 by ysavalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * La función memcpy copia un bloque de
 * memoria de una ubicación a otra. Si los
 * bloques de memoria se superponen, 
 * el comportamiento es indefinido
 */

#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
