/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysavalen <ysavalen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:10:47 by ysavalen          #+#    #+#             */
/*   Updated: 2024/09/23 16:56:10 by ysavalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
*/

/*
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	main(void)
{
	char test1 = 'a';
	printf("El carácter '%c' %s es una letra.\n",
		   test1, ft_isalpha(test1) ? "SI" : "NO");

	char test2 = '#';
	printf("El carácter '%c' %s es una letra.\n",
		   test2, ft_isalpha(test2) ? "SI" : "NO");
}
*/

/*
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	main(void)
{
       char test1 = '9';
       printf("El carácter '%c' %s es un dígito.\n",
              test1, ft_isdigit(test1) ? "SI" : "NO");
       char test2 = 'a';
       printf("El carácter '%c' %s es un dígito.\n",
              test2, ft_isdigit(test2) ? "SI" : "NO");
       int test3 = 3;
       printf("El carácter '%d' %s es un dígito.\n",
              test3, ft_isdigit(test3) ? "SI" : "NO");
       int test4 = -1;
       printf("El carácter '%d' %s es un dígito.\n",
              test4, ft_isdigit(test4) ? "SI" : "NO");
       int test5 = 256;
       printf("El carácter '%d' %s es un dígito.\n",
              test5, ft_isdigit(test5) ? "SI" : "NO");
}
*/

/*

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
*/

/*
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

int	main(void)
{
	char test1 = 'A';
	printf("El carácter '%c' %s es ASCII.\n",
		   test1, ft_isascii(test1) ? "SÍ" : "NO");
	int test2 = 128;
	printf("El carácter con código '%d' %s es ASCII.\n",
		   test2, ft_isascii(test2) ? "SÍ" : "NO");
	int test3 = -1;
	printf("El carácter con código '%d' %s es ASCII.\n",
		   test3, ft_isascii(test3) ? "SÍ" : "NO");
	int test4 = 0;
	printf("El carácter con código '%d' %s es ASCII.\n",
		   test4, ft_isascii(test4) ? "SÍ" : "NO");
	int test5 = 127;
	printf("El carácter con código '%d' %s es ASCII.\n",
		   test5, ft_isascii(test5) ? "SÍ" : "NO");

	return 0;
}
*/
/*

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

int main(void)
{
    char test_char1 = 'A';
    char test_char2 = '\n';
    char test_char3 = ' ';
    char test_char4 = 127;

    printf("ft_isprint('A') = %d\n", ft_isprint(test_char1)); // Debe ser 1
    printf("ft_isprint('\\n') = %d\n", ft_isprint(test_char2)); // Debe ser 0
    printf("ft_isprint(' ') = %d\n", ft_isprint(test_char3)); // Debe ser 1
    printf("ft_isprint(127) = %d\n", ft_isprint(test_char4)); // Debe ser 0

    return 0;
}
*/

/*

size_t	ft_strlen(const char *str)
{
	size_t	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

int main()
{
    const char test [] = "Hola, mundo!";
    printf("La longitud de la cadena es: %zu\n", ft_strlen(test));
    return 0;
}
*/

/*
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	s = b;
	if (!b)
		return (NULL);
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
*/
/*
void    *ft_memset(void *b, int c, size_t len)
{
        unsigned char   *s;
        size_t                  i;

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

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

#include <stdio.h>

int	main(void)
{
    char str[50] = "Hola, mundo!";
    printf("Antes de ft_bzero: '%s'\n", str);

    // Llamamos a ft_bzero para poner a cero los primeros 6 bytes
    ft_bzero(str, 6);

    printf("Después de ft_bzero: '%s'\n", str);

    return 0;
}
*/

/*
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
        unsigned char           *d;
        const unsigned char     *s;
        size_t                          i;

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

int     main(void)
{
    char src[] = "Hola, 42Madrid!";
    char dst[20];

    ft_memcpy(dst, src, sizeof(src));
    printf("Resultado de ft_memcpy: %s\n", dst);
    return 0;
}
*/

/*
void    *ft_memmove(void *dest, const void *src, size_t n)
{
        unsigned char           *d;
        const unsigned char     *s;
        size_t                          i;

        d = (unsigned char *)dest;
        s = (const unsigned char *)src;
        if (d > s && s + n > d)
        {
                while (n > 0)
                {
                        n--;
                        d[n] = s[n];
                }
        }
        else
        {
                ft_memcpy (dest, src, n);
        }
        return (dest);
}

int	main(void)
{
    char src[] = "Hello, 42Madrid!";
    char dest[20];

    printf("Antes de ft_memmove (sin solapamiento):\n");
    printf("src: %s\n", src);
    ft_memmove(dest, src, 14);
    printf("dest: %s\n", dest); 

    printf("\nAntes de ft_memmove (con solapamiento):\n");
    printf("src: %s\n", src);
    ft_memmove(src + 7, src, 7);
    printf("src después de solapamiento: %s\n", src);

    return 0;
}
*
* */

/*
size_t  ft_strlcpy(char *dest, const char *src, size_t destsize)
{
        size_t  i;
        size_t  src_len;

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
int	main(void)
{
    char src[] = "Hola, mundo!";
    char dst[20];
    size_t result;

    result = ft_strlcpy(dst, src, sizeof(dst));

    printf("Cadena copiada: '%s'\n", dst);
    printf("Longitud de la cadena fuente: %zu\n", result);

    return 0;
}

*/

/*
size_t  ft_strlcat(char *dest, const char *src, size_t destsize)
{
        size_t  dest_len;
        size_t  src_len;
        size_t  i;

        i = 0;
        dest_len = ft_strlen(dest);
        src_len = ft_strlen(src);
        if (destsize <= dest_len)
        {
                return (destsize + src_len);
        }
        while (i < src_len && (dest_len + i + 1) < destsize)
        {
                dest[dest_len + i] = src[i];
                i++;
        }
        dest[dest_len + i] = '\0';
        return (dest_len + src_len);
}

int	main() 
{
    char dst[20] = "Hola, ";
    const char *src = "mundo!";
    size_t dstsize = sizeof(dst);

    ft_strlcat(dst, src, dstsize);

    printf("Cadena resultante: %s\n", dst);
    printf("Longitud de dst: %zu\n", ft_strlen(dst));

    return 0;
}
*/
