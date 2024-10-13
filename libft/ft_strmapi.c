/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysavalen <ysavalen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:49:29 by ysavalen          #+#    #+#             */
/*   Updated: 2024/10/03 18:06:57 by ysavalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			s_len;
	char			*new;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	new = malloc(s_len + 1);
	if (!new)
		return (NULL);
	while (i < s_len)
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[s_len] = '\0';
	return (new);
}
