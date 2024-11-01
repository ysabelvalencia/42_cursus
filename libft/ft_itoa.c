/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysavalen <ysavalen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:20:54 by ysavalen          #+#    #+#             */
/*   Updated: 2024/10/15 16:56:25 by ysavalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	ft_write_string(char *s, long n, int len)
{
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	if (n == 0)
	{
		s[0] = '0';
		s[1] = '\0';
		return ;
	}
	s[len] = '\0';
	while (n > 0)
	{
		s[--len] = (n % 10) + '0';
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*s;
	long	num;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	num = (long)n;
	len = ft_count_digits(num);
	s = (char *)malloc(len + 1);
	if (!s)
		return (NULL);
	ft_write_string(s, num, len);
	return (s);
}
