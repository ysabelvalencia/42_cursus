/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysavalen <ysavalen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:10:31 by ysavalen          #+#    #+#             */
/*   Updated: 2024/10/03 18:36:58 by ysavalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t			s_len;
	unsigned int	i;

	if (!s || !f)
		return ;
	s_len = ft_strlen(s);
	i = 0;
	while (i < s_len)
	{
		f(i, &s[i]);
		i++;
	}
}
