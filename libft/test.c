/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysavalen <ysavalen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:10:47 by ysavalen          #+#    #+#             */
/*   Updated: 2024/09/25 22:20:32 by ysavalen         ###   ########.fr       */
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

int	main(void)
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

int	main()
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
void	*ft_memset(void *b, int c, size_t len)
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
void	*ft_memcpy(void *dest, const void *src, size_t n)
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

int	main(void)
{
    char src[] = "Hola, 42Madrid!";
    char dst[20];

    ft_memcpy(dst, src, sizeof(src));
    printf("Resultado de ft_memcpy: %s\n", dst);
    return 0;
}
*/

/*
void	*ft_memmove(void *dest, const void *src, size_t n)
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
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
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
size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
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

/*
char	*ft_strchr(const char *s, int c)
{
        while (*s != '\0')
        {
                if (*s == (char) c)
                        return ((char *)s);
                s++;
        }
        if (c == '\0')
                return ((char *) s);
        return (NULL);
}

int	main(void)
{
    char *result;

    result = ft_strchr("Hola, mundo!", 'm');
    printf("Resultado: %s\n", result ? result : "No encontrado");

    result = ft_strchr("Hola, mundo!", 'z');
    printf("Resultado: %s\n", result ? result : "No encontrado");

    return (0);
}

*/

/*
char	*ft_strrchr(const char *s, int c)
{
        const char      *last;

        last = NULL;
        while (*s != '\0')
        {
                if (*s == (char) c)
                        last = s;
                s++;
        }
        if (c == '\0')
                return ((char *)s);
        return ((char *)last);
}

int	main(void)
{
    const char *str = "Mississippi";
    char ch = 's';

    printf("La última aparición de '%c' es: %s\n", ch, ft_strrchr(str, ch));
    return (0);
}
*/
/*
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
        if (n == 0)
                return (0);
        if (*s1 != *s2)
                return ((unsigned char) *s1 - (unsigned char) *s2);
        if (n == 1)
                return (0);
        return (ft_strncmp (s1 + 1 , s2 + 1, n - 1));
}

int	main(void)
{
    const char *str1 = "Hola";
    const char *str2 = "HolaMundo";
    size_t n = 5;

    printf("Resultado de la comparación: %d\n", ft_strncmp(str1, str2, n));

    return (0);
}
*/
/*
void	*ft_memchr(const void *s, int c, size_t n)
{       
        const unsigned char *ptr;
        unsigned char ch;

        ptr = s;
        ch = (unsigned char)c;
        if (n == 0)
                return (NULL);
        while (n--)
        {
                if (*ptr == ch)
                        return (void *)ptr;
                ptr++;
        }
        return (NULL);
}

int	main(void)
{
    const char str[] = "42Madrid";
    char *result;
    char ch = 'M';

    result = ft_memchr(str, ch, 8);
    printf("Resultado: %p\n", (void *)result);
    printf("Carácter encontrado: %c\n", result ? *result : 'N');

    return (0);
}
*/

/*
int	memcmp(const void *s1, const void *s2, size_t n)
{
        unsigned char   *ptr1;
        unsigned char   *ptr2;
        size_t                  i;

        ptr1 = (unsigned char *)s1;
        ptr2 = (unsigned char *)s2;
        i = 0;
        while (i < n)
        {
                if (ptr1[i] != ptr2[i])
                        return (ptr1[i] - ptr2[i]);
                i++;
        }
        return (0);
}

int	main(void)
{
    char str1[] = "Hello, 42!";
    char str2[] = "Hello, 42!";
    char str3[] = "Hello, World!";
    size_t n = 10;

    int result1 = memcmp(str1, str2, n);
    printf("Comparación de str1 y str2: %d\n", result1);
    int result2 = memcmp(str1, str3, n);
    printf("Comparación de str1 y str3: %d\n", result2);
    int result3 = memcmp(str1, str3, 5);
    printf("Comparación de los primeros 5 bytes de str1 y str3: %d\n", result3);
    return (0);
}
*/
/*
char    *ft_strnstr(const char *s1, const char *s2, size_t n)
{
        size_t  i;
        size_t  j;

        if (!*s2)
                return ((char *)s1);
        i = 0;
        while (s1[i] && i < n)
        {
                j = 0;
                while (s1[i + j] == s2[j] && (i + j) < n)
                {
                        if (!s2[j + 1])
                                return ((char *)&s1[i]);
                        j++;
                }
                i++;
        }
        return (NULL);
}

int	main(void)
{
    const char haystack[] = "42Madrid es una gran escuela de programación.";
    const char needle[] = "gran";
    size_t len = 20;
    char *result = ft_strnstr(haystack, needle, len);
    printf("Resultado: %s\n", result);

    return (0);
}
*/

/*
int     ft_atoi(const char *str)
{
        int     i;
        int     sign;
        int     result;

        i = 0;
        sign = 1;
        result = 0;
        while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
                i++;
        if (str[i] == '-' || str[i] == '+')
        {
                if (str[i] == '-')
                        sign = -1;
                i++;
        }
        while (str[i] >= '0' && str[i] <= '9')
        {
                result = result * 10 + (str[i] - '0');
                i++;
        }
        return (result * sign);
}

int	main(void)
{
    const char *num_str1 = "   42";
    const char *num_str2 = "  -123";
    const char *num_str3 = "56abc";
    const char *num_str4 = "+789";

    printf("String: '%s' -> Integer: %d\n", num_str1, ft_atoi(num_str1));
    printf("String: '%s' -> Integer: %d\n", num_str2, ft_atoi(num_str2));
    printf("String: '%s' -> Integer: %d\n", num_str3, ft_atoi(num_str3));
    printf("String: '%s' -> Integer: %d\n", num_str4, ft_atoi(num_str4));

    return (0);
}

*/

/*
void	*ft_calloc(size_t nmemb, size_t size)
{
        void    *ptr;

        ptr = (void *)malloc(nmemb * size);
        if (!ptr)
                return (NULL);
        ft_bzero(ptr, nmemb * size);
        return (ptr);
}

int	main(void)
{
    int *arr = (int *)ft_calloc(5, sizeof(int));

    printf("arr[0] = %d\n", arr[0]);
    printf("arr[1] = %d\n", arr[1]);
    printf("arr[2] = %d\n", arr[2]);
    printf("arr[3] = %d\n", arr[3]);
    printf("arr[4] = %d\n", arr[4]);

    free(arr);
    return (0);
}
*/

/*
char    *ft_strdup(const char *s1)
{
        char    *str;
        size_t          len;

        len = ft_strlen(s1);
        str = (char *)malloc((len + 1) * sizeof(char));
        if (!str)
                return (NULL);
        ft_memcpy(str, s1, len);
        str[len] = '\0';
        return (str);
}

int main(void)
{
    const char *original = "Hola, mundo!";
    char *duplicado;
    
    duplicado = ft_strdup(original);
    
    printf("Cadena original: %s\n", original);
    printf("Cadena duplicada: %s\n", duplicado);

    // Liberar la memoria asignada
    free(duplicado);

    return (0);
}

*/