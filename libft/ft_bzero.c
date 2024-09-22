/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysavalen <ysavalen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 23:41:15 by ysavalen          #+#    #+#             */
/*   Updated: 2024/09/22 23:41:15 by ysavalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La función bzero se puede utilizar 
 * para borrar el área de memoria dada 
 * con cero bytes (\0). Toma dos argumentos, 
 * la dirección inicial de la región de memoria 
 * y el número de bytes que deben ponerse a cero.
 * Otra forma de decirlo, es que crearemos una cadena
 *  de tamaño n y llenaremos cada posición de
 *  indice con un 0. Para ello, utilizaremos
 *  nuestra función ft_memset creada anteriormente. 
*/
#include "libft.h"
#include <string.h>

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

int	main()
{
    char str[50] = "Hola, mundo!";
    printf("Antes de ft_bzero: '%s'\n", str);

    // Llamamos a ft_bzero para poner a cero los primeros 6 bytes
    ft_bzero(str, 6);

    printf("Después de ft_bzero: '%s'\n", str);

    return 0;
}
