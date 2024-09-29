/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysavalen <ysavalen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:28:39 by ysavalen          #+#    #+#             */
/*   Updated: 2024/09/25 18:28:39 by ysavalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t elements, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(elements * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, elements * size);
	return (ptr);
}
