/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysavalen <ysavalen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 18:43:23 by ysavalen          #+#    #+#             */
/*   Updated: 2024/09/22 18:43:23 by ysavalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	s = b;
	if (!b)
		return (NULL);
	if (len == 0)
		return (b);
	i = 0;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

#include <stdio.h>

int	main()
{
	char 	buffer[6];

	buffer[0] = ' ';
	buffer[1] = ' ';
	buffer[2] = ' ';
	buffer[3] = ' ';
	buffer[4] = ' ';
	buffer[5] = '\0';

	printf("Antes de ft_memset: '%s'\n", buffer);

	ft_memset(buffer, 'A', sizeof(buffer) -1);

	printf("Después de ft_memset: '%s'\n", buffer);

	return (0);
}	
