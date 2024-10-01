/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_part2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysavalen <ysavalen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:46:47 by ysavalen          #+#    #+#             */
/*   Updated: 2024/10/01 18:57:03 by ysavalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
*/
/* FUNCIONES AUXILIARES
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
*/

/*
>>>>>>>>>>>>>>>>>>>>  FUNCION SUBSTR


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		str = malloc(1);
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (len > s_len - start)
		len = s_len - start;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

int main() {
    const char *str = "Hola, mundo!";
    char *substr;

    // Caso 1: Subcadena desde el índice 0
    substr = ft_substr(str, 0, 5);
    printf("Substr 0-5: '%s'\n", substr);
    free(substr);

    // Caso 2: Subcadena desde el índice 7
    substr = ft_substr(str, 7, 6);
    printf("Substr 7-6: '%s'\n", substr);
    free(substr);

    // Caso 3: Subcadena que comienza fuera de la cadena
    substr = ft_substr(str, 20, 5);
    printf("Substr 20-5: '%s'\n", substr);
    free(substr);

    // Caso 4: Subcadena con longitud mayor a lo que queda
    substr = ft_substr(str, 5, 20);
    printf("Substr 5-20: '%s'\n", substr);
    free(substr);

    // Caso 5: Subcadena con longitud 0
    substr = ft_substr(str, 0, 0);
    printf("Substr 0-0: '%s'\n", substr);
    free(substr);

    return 0;
}

*/
/*
OUTPUT SUBSTR
Substr 0-5: 'Hola,'
Substr 7-6: 'undo!'
Substr 20-5: ''
Substr 5-20: ' mundo!'
Substr 0-0: ''
/*

>>>>>>>>>>>>>>>> FUNCION STRJOIN

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*new;

	if (!s1 ||!s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new = (char *)malloc(s1_len + s2_len + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, s1_len + 1);
	ft_strlcpy(new + s1_len, s2, s2_len + 1);
	return (new);
}

int main(void) {
    char *s1 = "Hola";
    char *s2 = " Mundo";
    char *result;

    result = ft_strjoin(s1, s2);

    // Mostramos el resultado
    if (result) {
        printf("Resultado: '%s'\n", result);
        free(result);  // Liberamos la memoria reservada
    } else {
        printf("Error al unir cadenas.\n");
    }

    // Probar con cadenas vacías
    char *empty = "";
    result = ft_strjoin(empty, s2);
    if (result) {
        printf("Resultado con cadena vacía: '%s'\n", result);
        free(result);
    }

    // Probar con NULL
    result = ft_strjoin(NULL, s2);
    if (!result) {
        printf("Resultado esperado con NULL: NULL\n");
    }

    return 0;
}
*/
/*
OUTPUT STRJOIN
Resultado: 'Hola Mundo'
Resultado con cadena vacía: 'Mundo'
Resultado esperado con NULL: NULL
*/

/*
>>>>>>>>>>>>>>>>>>>>>>>> FUNCION STRTRIM


*/