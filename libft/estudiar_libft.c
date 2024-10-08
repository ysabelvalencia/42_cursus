/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   estudiar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysavalen <ysavalen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 15:09:33 by ysavalen          #+#    #+#             */
/*   Updated: 2024/10/06 15:09:33 by ysavalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c>= 'A' && c<= 'Z') || (c>= 'a' && c<= 'z'));
}

#include <stdio.h>

int	main(void)
{
	char test1 = 'a';
	char test2 = 'B';
	char test3 = '1';
	char test4 = '\0';

	printf("El resultado de 'a' es: %d\n", ft_isalpha(test1));
	printf("El resultado de '%c' es: %d\n", test2, ft_isalpha(test2));
	printf("El resultado de '%c' es: %d\n", test3, ft_isalpha(test3));
	printf("El caracter '%c' es una letra? %s\n", test4, ft_isalpha(test4) ? "SI" : "NO");
	printf("%d\n", ft_isalpha(5));
	printf("%d\n", ft_isalpha(122));
	return (0);
}

OUTPUT
-	El resultado de 'a' es: 1
-	El resultado de 'B' es: 1
-	El resultado de '1' es: 0
-	El caracter '% ' es una letra? NO
-	0
-	1 // devuelve que si es una letra porque es el valor ascii de ‘z’ miniscula

‘A’ = 65 && ‘Z’ = 90 || ‘a’ = 97 && ‘z’ = 122
*/








/*
int	ft_isdigit(int c)
{
	return (c>= '0' && c<= '9');
}

#include <stdio.h>

int	main(void)
{
	char test1 = 'B';
	char test2 = '9';
	char test3 = '2';
	int test4 = 122;
	int test5 = 48;
	int test6 = -1;
	int test7 = 1000;
	char test8 = '$';
	char test9 = 'a';
	

	printf("'%c' es un número? %d\n", test1, ft_isdigit(test1));
	printf("'%c' es un número? %d\n", test2, ft_isdigit(test2));
	printf("'%c' es un número? %d\n", test3, ft_isdigit(test3));
	printf("%d es un número? %d\n", test4, ft_isdigit(test4));
	printf("%d es un número? %d\n", test5, ft_isdigit(test5));
	printf("%d es un número? %d\n", test6, ft_isdigit(test6));
	printf("%d es un número? %d\n", test7, ft_isdigit(test7));
	printf("'%c' es un número? %d\n", test8, ft_isdigit(test8));
	printf("'%c' es un número? %d\n", test9, ft_isdigit(test9));
	return (0);
}

OUTPUT:
'B' es un número? 0
'9' es un número? 1
'2' es un número? 1
122 es un número? 0
48 es un número? 1
-1 es un número? 0
1000 es un número? 0
'$' es un número? 0
'a' es un número? 0

*/









/*
#include "libft.h"
int	ft_isalnum(int c)
{
	return(ft_isalpha(c) || ft_isdigit(c));
}

#include <stdio.h>

int	main(void)
{
	char test1 = 'B';
	char test2 = '9';
	char test3 = '2';
	int test4 = 122;
	int test5 = 48;
	int test6 = -1;
	int test7 = 1000;
	char test8 = '$';
	char test9 = 'a';
	printf("'%c' es alfanumérico? %d\n", test1, ft_isalnum(test1));
	printf("'%c' es alfanumérico? %d\n", test2, ft_isalnum(test2));
	printf("'%c' es alfanumérico? %d\n", test3, ft_isalnum(test3));
	printf("%d es alfanumérico? %d\n", test4, ft_isalnum(test4));
	printf("%d es alfanumérico? %d\n", test5, ft_isalnum(test5));
	printf("%d es alfanumérico? %d\n", test6, ft_isalnum(test6));
	printf("%d es alfanumérico? %d\n", test7, ft_isalnum(test7));
	printf("'%c' es alfanumérico? %d\n", test8, ft_isalnum(test8));
	printf("'%c' es alfanumérico? %d\n", test9, ft_isalnum(test9));
	return (0);
}

OUTPUT
'B' es alfanumérico? 1
'9' es alfanumérico? 1
'2' es alfanumérico? 1
122 es alfanumérico? 1
48 es alfanumérico? 1
-1 es alfanumérico? 0
1000 es alfanumérico? 0
'$' es alfanumérico? 0
'a' es alfanumérico? 1

*/





/*
int	ft_isascii(int c)
{
	return ( c>= 0 && c<= 127);
}

#include <stdio.h>

int	main(void)
{
	char test1 = 'B';
	char test2 = '9';
	char test3 = '\0';
	int test4 = 128;
	int test5 = 48;
	int test6 = -1;
	int test7 = 32;
	char test8 = '$';
	char test9 = 'a';
	char test10 = '~';

	printf("'%c' es ascii? %d\n", test1, ft_isascii(test1));
	printf("'%c' es ascii? %d\n", test2, ft_isascii(test2));
	printf("'\\0' es ascii? %d\n", ft_isascii(test3));
	printf("%d es ascii? %d\n", test4, ft_isascii(test4));
	printf("%d es ascii? %d\n", test5, ft_isascii(test5));
	printf("%d es ascii? %d\n", test6, ft_isascii(test6));
	printf("%d es ascii? %d\n", test7, ft_isascii(test7));
	printf("'%c' es ascii? %d\n", test8, ft_isascii(test8));
	printf("'%c' es ascii? %d\n", test9, ft_isascii(test9));
	printf("'%c' es ascii? %d\n", test10, ft_isascii(test10));
	return (0);
}

OUTPUT

'B' es ascii? 1
'9' es ascii? 1
'\0' es ascii? 1
128 es ascii? 0
48 es ascii? 1
-1 es ascii? 0
32 es ascii? 1
'$' es ascii? 1
'a' es ascii? 1
'~' es ascii? 1

*/






/*

int	ft_isprint(int c)
{
	return ( c>= 32 && c<= 126);
}

#include <stdio.h>

int	main(void)
{
	char test1 = 'B';
	char test2 = '9';
	char test3 = '\0';
	int test4 = 128;
	int test5 = 48;
	int test6 = -1;
	int test7 = 15;
	char test8 = '$';
	char test9 = 'a';
	char test10 = ' ';

	printf("'%c' es imprimible? %d\n", test1, ft_isprint(test1));
	printf("'%c' es imprimible? %d\n", test2, ft_isprint(test2));
	printf("'\\0' es imprimible? %d\n", ft_isprint(test3));
	printf("%d es imprimible? %d\n", test4, ft_isprint(test4));
	printf("%d es imprimible? %d\n", test5, ft_isprint(test5));
	printf("%d es imprimible? %d\n", test6, ft_isprint(test6));
	printf("%d es imprimible? %d\n", test7, ft_isprint(test7));
	printf("'%c' es imprimible? %d\n", test8, ft_isprint(test8));
	printf("'%c' es imprimible? %d\n", test9, ft_isprint(test9));
	printf("'%c' es imprimible? %d\n", test10, ft_isprint(test10));
	return (0);
}

OUTPUT

'B' es imprimible? 1
'9' es imprimible? 1
'\0' es imprimible? 0
128 es imprimible? 0
48 es imprimible? 1
-1 es imprimible? 0
15 es imprimible? 0
'$' es imprimible? 1
'a' es imprimible? 1
' ' es imprimible? 1

*/













/*
#include "libft.h"
#include <stddef.h>

size_t	ft_strlen (const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

#include <stdio.h>

int	main(void)
{
	char test1[] = "Mi nombre es Ysabel"; //19 + nulo
	printf("La longitud de '%s' es: %zu.\n", test1, ft_strlen(test1));
	
	const char test2[] = "Canario amarillo!!!!"; //20 + nulo
	printf("La longitud de '%s' es: %zu.\n", test2, ft_strlen(test2));
	
	const char *test3 = "42 Madrid$"; //10 + nulo
	printf("La longitud de '%s' es: %zu.\n", test3, ft_strlen(test3));
}

OUTPUT

La longitud de 'Mi nombre es Ysabel' es: 19.
La longitud de 'Canario amarillo!!!!' es: 20.
La longitud de '42 Madrid$' es: 10.

*/



/*

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	s = b;
	i = 0;
	while (i < len)
	{
	 s[i] = (unsigned char)c;
	 i++;
	}
	return (b);

}

int	main (void)
{
	char test1[10];
	ft_memset(test1, 'F', 8);
	printf ("Contenido del buffer despues de usar ft_memset: ");
	size_t i = 0;
	while (i < 10)
	{
		printf("'%c ", test1[i]);
		i++;
	}
	printf("\n");
	return (0);
}

OUTPUT
Contenido del buffer despues de usar ft_memset: 'F' 'F' 'F' 'F' 'F' 'F' 'F' 'F' '' '' 

*/
















/*
#include "libft.h"
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '0', n);
}

#include <stdio.h>
int	main (void)
{
	char test1[10];
	ft_memset(test1, 'F', 8);
	printf ("Contenido 'test1' despues de usar ft_memset: ");
	size_t i = 0;
	while (i < 10)
	{
		printf("'%c' ", test1[i]);
		i++;
	}
	printf("\n");
	ft_bzero(test1, 4);
	printf ("Contenido de 'test1' despues de usar ft_bzero: ");
	i = 0;
	while(i < 10)
	{
		printf("'%c' ", test1[i]);
		i++;
	}
	printf("\n");
	return(0);
}

OUTPUT
Contenido 'test1' despues de usar ft_memset: 'F' 'F' 'F' 'F' 'F' 'F' 'F' 'F' '' '' 
Contenido de 'test1' despues de usar ft_bzero: '' '' '' '' 'F' 'F' 'F' 'F' '' '' 

*/












/*
#include "libft.h"
#include <stddef.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;
	size_t	i;

	if (!dest && !src)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>
int	main (void)
{
	const char src[] = "Hello World!";
	char dest[20];
	size_t len = 5;
	ft_memcpy(dest, src, len);
	printf("SRC: %s\n", src);
	printf("DEST: %s\n", dest);
	return (0);
}

OUTPUT
SRC: Hello World!
DEST: Hello

 
Ejemplo 2 n == 0
int	main (void)
{
	const char src[] = "Hello World!";
	char dest[20] = "Initial";
	size_t len = 0;
	ft_memcpy(dest, src, len);
	printf("Ejemplo en caso de que n es 0. Se espera que dest = Initial\n");
	printf("SRC: %s\n", src);
	printf("DEST: %s\n", dest);
	return (0);
}

OUTPUT
Ejemplo en caso de que n es 0. Se espera que dest = Initial
SRC: Hello World!
DEST: Initial


Ejemplo 3 dest = NULL
char *dest = NULL;
El output termina con el código 139, simplemente no muestra nada.


Ejemplo 4
int	main (void)
{
	const char src[] = "This is a very long string in this cruel life"; //26 caracteres
	char dest [20];
	size_t len = 30; //hasta "in " hay 30
	ft_memcpy(dest, src, len);
	printf("Ejemplo en caso de n supere el limite del buffer dest\n");
	printf("SRC: %s\n", src);
	printf("DEST: %s\n", dest);
	return (0);
}
OUTPUT
Ejemplo en caso de n supere el limite del buffer dest
SRC: This is a very long string in this cruel life
DEST: This is a very long string in //ha copiado 30 aunque el limite de dest es 20



Ejemplo 5 copiar otro tipo de datos como arrays con numeros
int	main (void)
{
	int src[5] = {1, 2, 3, 4, 5};
	int dest [5];
	size_t len = sizeof(src);
	ft_memcpy(dest, src, len);
	int i = 0;
	printf("Dest: ");
	while (i < 5)
	{
	    printf("%d ", dest[i]);
	    i++;
	}
	printf("\n");0;
	
	return (0);
}

OUTPUT
Dest: 1 2 3 4 5
*/



















/*
#include "libft.h"
#include <stddef.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
        unsigned char           *d;
        const unsigned char     *s;

		if (!dest && !src)
		return (dest);
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

#include <stdio.h>

int	main (void)
{
	//Ejemplo 1 sin solapamiento

	char src1[] = "Hello World!";
	char dest[20];

	ft_memmove(dest, src1, 2);
	printf("Ejemplo 1, copia sin solapamiento. Dest esperado: 'He'\n");
	printf("SRC: %s\n", src1);
	printf("DEST: %s\n\n", dest);
	
	//Ejemplo 2 sin solapamiento.Copiar "World" en la posición de "Hello"
	char src2[] = "Hello, World!";
    ft_memmove(src2, src2 + 7, 5);
    printf("Ejemplo 2 sin solapamiento.Copiar 'World' en la posición de 'Hello'. Dest esperado: 'World World!' \n");
    printf("DEST: %s\n\n", src2);  // Output esperado: "World World!"
    
    //Ejemplo 3, solapamiento con dest antes de src. Mover "5678" a la posición de "3456"
    char src3[] = "1234567890";
    ft_memmove(src3 + 2, src3 + 4, 4);
    printf("Ejemplo 3, solapamiento con dest antes de src. Mover '5678' a la posición de '3456'. Dest esperado: '1256787890'\n");
    printf("DEST: %s\n\n", src3);
    
    //Ejemplo 4, solapamiento con dest después de src. Mover 'abc' a la posición de 'cde'
    char src4[] = "abcdef";
    ft_memmove(src4 + 3, src4, 3);
    printf("Ejemplo 4, Solapamiento con dest después de src. Mover 'abc' a la posición de 'cde'. Dest esperado: 'abcabc' \n");
    printf("DEST: %s\n\n", src4);
    
    //Ejemplo 5, solapamiento Total (Misma Dirección).Mover toda la cadena sobre sí misma.
    char src5[] = "Overlap";
    ft_memmove(src5, src5, 7);
    printf("Ejemplo 5, solapamiento Total (Misma Dirección).Mover toda la cadena sobre sí misma.Dest esperado: 'Overlap'\n");
    printf("DEST: %s\n", src5); 
    return 0;
}

OUTPUTS

Ejemplo 1, copia sin solapamiento. Dest esperado: He
SRC: Hello World!
DEST: He

Ejemplo 2 sin solapamiento.Copiar 'World' en la posición de 'Hello'. Dest esperado:World World! 
DEST: World, World!

Ejemplo 3, solapamiento con dest antes de src. Mover '5678' a la posición de '3456'. Dest esperado: '1256787890'
DEST: 1256787890

Ejemplo 4, Solapamiento con dest después de src. Mover 'abc' a la posición de 'cde'. Dest esperado: 'abcabc' 
DEST: abcabc

Ejemplo 5, solapamiento Total (Misma Dirección).Mover toda la cadena sobre sí misma.Dest esperado: 'Overlap'
DEST: Overlap

*/

















/*

#include "libft.h"

size_t  ft_strlcpy(char *dest, const char *src, size_t destsize)
{
        size_t  i;
        size_t  src_len;

        src_len = ft_strlen(src);
        if (destsize == 0)
                return (src_len);
        i = 0;
        while (i + 1 < destsize && src[i])
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] = '\0';
        return (src_len);
}


int	main (void)
{
    //Ejemplo 1, copia completa
	const char src [] = "Hello, World!";
	char dest [20];
	size_t copied = ft_strlcpy(dest, src, sizeof(dest));
	printf("Ejemplo 1, copia completa. Salida esperada: 'Hello World!' y '13'\n");
	printf("SRC: '%s'\n", src);
	printf("DEST: '%s'\n", dest);
	printf("Longitud de src: %zu\n\n", copied);
	
	//Ejemplo 2, buffer de destino insuficiente
	//"Hello, World!"; //13 caracteres + nulo. dado que dest2 es 10 solo se pueden copiar de src a des 9 + nulo.
    char dest2[10];
    size_t copied2 = ft_strlcpy(dest2, src, sizeof(dest2));
    printf("Ejemplo 2, buffer de destino insuficiente. Salida esperada: 'Hello, Wo' y '13'\n");
    printf("DEST: '%s'\n", dest2); // Salida esperada: "Hello, Wo"
    printf("Longitud de src: %zu\n\n", copied2); // Salida esperada: 13
    
    //Ejemplo 3, tamaño del Búfer de Destino Cero
    char dest3[20];
    size_t copied3 = ft_strlcpy(dest3, src, 0);
    printf("Ejemplo 3, tamaño del búfer de destino cero. Salida esperada: '""' y '13'\n");
    printf("DEST: '%s'\n", dest3); // Salida esperada: ""
    printf("Longitud de src: %zu\n\n", copied3); // Salida esperada: 13
    
    //Ejemplo 4, copia de cadena vacía
    char src4[] = "";
    char dest4[20];
    size_t copied4 = ft_strlcpy(dest4, src4, sizeof(dest4));
    printf("Ejemplo 4, copia de cadena vacía. Salida esperada: '""' y '0'\n"); 
    printf("DEST: '%s'\n", dest4); // Salida esperada: ""
    printf("Longitud de src: %zu\n\n", copied4); // Salida esperada: 0
    
    //Ejemplo 5, copia con dest inicialmente relleno
    char src5[] = "Goodbye!";
    char dest5[20] = "Hello, World!";
    size_t copied5 = ft_strlcpy(dest5, src5, sizeof(dest5));
    printf("Ejemplo 5, copia con dest inicialmente relleno: 'Goodbye!' y '8'\n"); 
    printf("DEST: '%s'\n", dest5); // Salida esperada: "Goodbye!"
    printf("Longitud de src: %zu\n\n", copied5); // Salida esperada: 8


	return (0);
}

OUTPUTS

Ejemplo 1, copia completa. Salida esperada: 'Hello World!' y '13'
SRC: 'Hello, World!'
DEST: 'Hello, World!'
Longitud de src: 13

Ejemplo 2, buffer de destino insuficiente. Salida esperada: 'Hello, Wo' y '13'
DEST: 'Hello, Wo'
Longitud de src: 13

Ejemplo 3, tamaño del búfer de destino cero. Salida esperada: '' y '13'
DEST: ''
Longitud de src: 13

Ejemplo 4, copia de cadena vacía. Salida esperada: '' y '0'
DEST: ''
Longitud de src: 0

Ejemplo 5, copia con dest inicialmente relleno: 'Goodbye!' y '8'
DEST: 'Goodbye!'
Longitud de src: 8

*/





















/*
size_t  ft_strlcat(char *dest, const char *src, size_t destsize)
{
        size_t  dest_len;
        size_t  src_len;
        size_t  i;

        dest_len = ft_strlen(dest);
        src_len = ft_strlen(src);
        i = 0;
        if (destsize <= dest_len)
                return (destsize + src_len);
        while (i < src_len && (dest_len + i + 1) < destsize)
        {
                dest[dest_len + i] = src[i];
                i++;
        }
        dest[dest_len + i] = '\0';
        return (dest_len + src_len);
}

int main(void) 
{
    char dest[20] = "Hola";
    const char src[] = " Mundo!";
    printf("Ejemplo 1, concatenar con espacio suficiente\n");
    printf("Dest: '%s' \n", dest); 
    size_t result = ft_strlcat(dest, src, sizeof(dest));
    printf("Src: '%s' \n", src);
    printf("Resultado: '%s' \n", dest);
    printf("Longitud total: %zu \n\n", result);
    
    //Ejemplo 2, concatenar cuando destsize < que dest_len
    char dest2[20] = "Hola";
    size_t result2 = ft_strlcat(dest2, src, 5);
    printf("Ejemplo 2, concatenar con espacio insuficiente\n");
    printf("Resultado: '%s'\n", dest2);
    printf("Longitud total: %zu\n\n", result2);
    
    //Ejemplo 3, concatenar con un buffer de destino lleno
    char dest3[10] = "Hola";
    size_t result3 = ft_strlcat(dest3, src, sizeof(dest3));
    printf("Ejemplo 3, concatenar con un buffer de destino lleno\n");
    printf("Resultado: '%s'\n", dest3);
    printf("Longitud total: %zu\n\n", result3);
    
    //Ejemplo 4, concatenar con un src vacio
    char dest4[20] = "Hola";
    const char *src4 = "";
    size_t result4 = ft_strlcat(dest4, src4, sizeof(dest4));
    printf("Ejemplo 4, concatenar con un src vacio\n");
    printf("Resultado: %s\n", dest4);
    printf("Longitud total: %zu\n\n", result4);
    
    //Ejemplo 5, concatenar con dest vacio
    char dest5[20] = ""; 
    const char *src5 = "Hola";
    size_t result5 = ft_strlcat(dest5, src5, sizeof(dest5));
    printf("Ejemplo 5, concatenar con dest vacio \n");
    printf("Resultado: '%s'\n", dest5);
    printf("Longitud total: %zu\n", result5);


    return 0;
}

OUTPUT
Ejemplo 1, concatenar con espacio suficiente
Dest: 'Hola' 
Src: ' Mundo!' 
Resultado: 'Hola Mundo!' 
Longitud total: 11 

Ejemplo 2, concatenar con espacio insuficiente
Resultado: 'Hola'
Longitud total: 11

Ejemplo 3, concatenar con un buffer de destino lleno
Resultado: 'Hola Mund'
Longitud total: 11

Ejemplo 4, concatenar con un src vacio
Resultado: Hola
Longitud total: 4

Ejemplo 5, concatenar con dest vacio 
Resultado: 'Hola'
Longitud total: 4

*/

















/*
#include "libft.h"

int     ft_toupper(int c)
{
        if (c >= 'a' && c <= 'z')
                c -= 32;
        return (c);
}

int main(void) 
{
    char test1 = 'b';
    char test2 = 'a';
    char test3 = 'B';
    char test4 = '1';

    printf("Carácter '%c' -> '%c'\n", test1, ft_toupper(test1));
    printf("Carácter '%c' -> '%c'\n", test2, ft_toupper(test2));
    printf("Carácter '%c' -> '%c'\n", test3, ft_toupper(test3));
    printf("Carácter '%c' -> '%c'\n", test4, ft_toupper(test4));

    return 0;
}
OUTPUT
Caracter 'b' -> 'B'
Caracter 'a' -> 'A'
Caracter 'B' -> 'B'
Caracter '1' -> '1'


#include "libft.h"

int     ft_tolower(int c)
{
        if (c >= 'A' && c <= 'Z')
                c += 32;
        return (c);
}

int main(void) 
{
    char test1 = 'A';
    char test2 = 'D';
    char test3 = 'p';
    char test4 = '1';

    printf("Carácter '%c' -> '%c'\n", test1, ft_tolower(test1));
    printf("Carácter '%c' -> '%c'\n", test2, ft_tolower(test2));
    printf("Carácter '%c' -> '%c'\n", test3, ft_tolower(test3));
    printf("Carácter '%c' -> '%c'\n", test4, ft_tolower(test4));

    return 0;
}

OUTPUT

Carácter 'A' -> 'a'
Carácter 'D' -> 'd'
Carácter 'p' -> 'p'
Carácter '1' -> '1’

*/

















/*
#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
        while (*s != '\0')
        {
                if (*s == (unsigned char)c)
                        return ((char *)s);
                s++;
        }
        if ((unsigned char)c == '\0')
                return ((char *)s);
        return (NULL);
}


int main (void)
{
    const char test[] = "My name is Ysabel";
    char c = 'i';
    char *result = ft_strchr(test, c);
    printf("Cadena:'%s'\n", test);
    printf("Caracter a buscar: '%c'\n", c);
    printf("Cadena encontrada: '%s'\n", result);
    printf("Posición en la cadena: '%ld'\n\n", result - test);
    
    c = 'p';
    char *result2 = ft_strchr(test, c);
    printf("Cadena:'%s'\n", test);
    printf("Caracter a buscar: '%c'\n", c);
    printf("Cadena encontrada: '%s'\n\n", result2);
   //printf("Cadena encontrada: '%s'\n\n", result2 ? result2 : "No encontrado");

    
    c = '\0';
    char *result3 = ft_strchr(test, c);
    printf("Cadena:'%s'\n", test);
    printf("Caracter a buscar: '%c'\n", c);
    printf("Cadena encontrada: '%s'\n", result3);
    printf("Posición en la cadena: '%ld'\n\n", result3 - test);
    
    c = ' ';
    char *result4 = ft_strchr(test, c);
    printf("Cadena:'%s'\n", test);
    printf("Caracter a buscar: '%c'\n", c);
    printf("Cadena encontrada: '%s'\n", result4);
    printf("Posición en la cadena: '%ld'\n", result4 - test);
}

OUTPUT
Cadena:'My name is Ysabel'
Caracter a buscar: 'i'
Cadena encontrada: 'is Ysabel'
Posición en la cadena: '8'

Cadena:'My name is Ysabel'
Caracter a buscar: 'p'
Cadena encontrada: '(null)'
// Cadena encontrada: 'No encontrado'

Cadena:'My name is Ysabel'
Caracter a buscar: ''
Cadena encontrada: ''
Posición en la cadena: '17'

Cadena:'My name is Ysabel'
Caracter a buscar: ' '
Cadena encontrada: ' name is Ysabel'
Posición en la cadena: '2'

*/



























/*
#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
        char    *last;

        last = NULL;
        while (*s != '\0')
        {
                if (*s == (unsigned char) c)
                        last = (char *)s;
                s++;
        }
        if ((unsigned char)c == '\0')
                return ((char *)s);
        return (last);
}


int	main (void)
{
	const char test[] = "My name is Ysabel";
	char c = 'a';
	char *result = ft_strrchr(test, c);
	printf("Cadena:'%s'\n", test);
	printf("Caracter a buscar: '%c'\n", c);
    printf("Cadena encoRntrada: '%s'\n", result);
    printf("Posición en la cadena: '%ld'\n\n", result - test);
    
	c = 'p';
	char *result2 = ft_strrchr(test, c);
	printf("Cadena:'%s'\n", test);
	printf("Caracter a buscar: '%c'\n", c);
    printf("Cadena encontrada: '%s'\n\n", result2 ? result2 : "No encotrado");
    
    c = '\0';
	char *result3 = ft_strrchr(test, c);
	printf("Cadena:'%s'\n", test);
	printf("Caracter a buscar: '%c'\n", c);
    printf("Cadena encontrada: '%s'\n", result3);
    printf("Posición en la cadena: '%ld'\n\n", result3 - test);
    
    c = ' ';
    char *result4 = ft_strrchr(test, c);
    printf("Cadena:'%s'\n", test);
    printf("Caracter a buscar: '%c'\n", c);
    printf("Cadena encontrada: '%s'\n", result4);
    printf("Posición en la cadena: '%ld'\n", result4 - test);
}

OUTPUT

Cadena:'My name is Ysabel'
Caracter a buscar: 'a'
Cadena encoRntrada: 'abel'
Posición en la cadena: '13'

Cadena:'My name is Ysabel'
Caracter a buscar: 'p'
Cadena encontrada: 'No encotrado'

Cadena:'My name is Ysabel'
Caracter a buscar: ''
Cadena encontrada: ''
Posición en la cadena: '17'

Cadena:'My name is Ysabel'
Caracter a buscar: ' '
Cadena encontrada: ' Ysabel'
Posición en la cadena: '10'

*/









/*

#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
        size_t  i;

        i = 0;
        while (i < n && s1[i] && s2[i])
        {
                if (s1[i] != s2[i])
                        return ((unsigned char)s1[i] - (unsigned char)s2[i]);
                i++;
        }
        if (i < n)
                return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        return (0);
}

int main(void) {
    char *str1 = "Hola";
    char *str2 = "Hola Mundo";
    char *str3 = "Hola";
    char *str4 = "Holb";
    
    // Ejemplo 1: Comparar completamente iguales
    printf("Ejemplo 1: %d\n", ft_strncmp(str1, str3, 4)); // Esperado: 0

    // Ejemplo 2: Comparar diferente longitud
    printf("Ejemplo 2: %d\n", ft_strncmp(str1, str2, 4)); // Esperado: 0

    // Ejemplo 3: Comparar con diferencia
    printf("Ejemplo 3: %d\n", ft_strncmp(str1, str4, 4)); // Esperado: valor negativo

    // Ejemplo 4: Comparar con límite
    printf("Ejemplo 4: %d\n", ft_strncmp(str1, str3, 5)); // Esperado: valor positivo (o negativo si cambia)

    // Ejemplo 5: Comparar hasta el final
    printf("Ejemplo 5: %d\n", ft_strncmp(str3, str2, 8)); // Esperado: valor negativo

    return (0);
}

OUTPUT

Ejemplo 1: 0
Ejemplo 2: 0
Ejemplo 3: -1
Ejemplo 4: 0
Ejemplo 5: -32
*/













/*
#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
        const unsigned char     *p;
        unsigned char           ch;
        size_t                          i;

        p = (const unsigned char *)s;
        ch = (unsigned char)c;
        i = 0;
        while (i < n)
        {
                if (p[i] == ch)
                        return ((void *)&p[i]);
                i++;
        }
        return (NULL);
}


int main() {
    const char *str1 = "Hola, mundo!";
    const char *str2 = "Prueba de memoria";
    const char *str3 = "Test de caracteres";
    const char *str4 = "";
    const char *str5 = "Sin caracteres";
    const char *str6 = NULL;  // Para probar el caso NULL

	// Ejemplo 1, buscar 'm' en "Hola, mundo!"
    char *result1 = ft_memchr(str1, 'm', ft_strlen(str1));
    printf("Ejemplo 1. Buscar 'm' en '%s' \n", str1);
	printf ("Resultado: '%s'\n\n", result1 ? result1 : "No encontrado");
	
	// Ejemplo 2: Buscar 'e' en "Prueba de memoria"
    char *result2 = ft_memchr(str2, 'e', ft_strlen(str2));
    printf("Ejemplo 2. Buscar 'e' en '%s'\n", str2);
    printf("Resultado: '%s'\n\n", result2 ? result2 : "No encontrado");

    // Ejemplo 3: Buscar 'z' en "Test de caracteres"
    char *result3 = ft_memchr(str3, 'z', ft_strlen(str3));
    printf("Ejemplo 3. Buscar 'z' en '%s'\n", str3);
    printf("Resultado: '%s'\n\n", result3 ? result3 : "No encontrado");

    // Ejemplo 4: Buscar un carácter en una cadena vacía
    char *result4 = ft_memchr(str4, 'a', ft_strlen(str4));
    printf("Ejemplo 4. Buscar 'a' en '%s'\n", str4);
    printf("Resultado: '%s'\n\n", result4 ? result4 : "No encontrado");

    // Ejemplo 5: Buscar 'c' en "Sin caracteres"
    char *result5 = ft_memchr(str5, 'c', ft_strlen(str5));
    printf("Ejemplo 5. Buscar 'c' en '%s'\n", str5);
    printf("Resultado: '%s'\n\n", result5 ? result5 : "No encontrado");

    // Ejemplo 6: Probar con un puntero NULL
    char *result6 = ft_memchr(str6, 'a', 0);
    printf("Ejemplo 6. Buscar 'a' en un puntero NULL\n");
    printf("Resultado: %s\n\n", result6);
    return 0;
}

OUTPUT 

Ejemplo 1. Buscar 'm' en 'Hola, mundo!' 
Resultado: 'mundo!'

Ejemplo 2. Buscar 'e' en 'Prueba de memoria'
Resultado: 'eba de memoria'

Ejemplo 3. Buscar 'z' en 'Test de caracteres'
Resultado: 'No encontrado'

Ejemplo 4. Buscar 'a' en ''
Resultado: 'No encontrado'

Ejemplo 5. Buscar 'c' en 'Sin caracteres'
Resultado: 'caracteres'

Ejemplo 6. Buscar 'a' en un puntero NULL
Resultado: (null)
*/














#include "libft.h"
#include <stddef.h>

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
        const unsigned char     *ptr1;
        const unsigned char     *ptr2;
        size_t                          i;

        ptr1 = (const unsigned char *)s1;
        ptr2 = (const unsigned char *)s2;
        i = 0;
        while (i < n)
        {
                if (ptr1[i] != ptr2[i])
                        return (ptr1[i] - ptr2[i]);
                i++;
        }
        return (0);
}


#include "libft.h"
#include <stddef.h>

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


#include "libft.h"

int     ft_atoi(const char *str)
{
        int     i;
        int     sign;
        int     result;

        i = 0;
        sign = 1;
        result = 0;
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || \
                        str[i] == '\f' || str[i] == '\r' || str[i] == '\v')
                i++;
        if (str[i] == '-' || str[i] == '+')
        {
                if (str[i] == '-')
                        sign = -1;
                i++;
        }
        if (str[i] == '\0')
                return (0);
        while (ft_isdigit(str[i]))
        {
                result = result * 10 + (str[i] - '0');
                i++;
        }
        return (result * sign);
}



#include "libft.h"
#include <stdlib.h>

void    *ft_calloc(size_t elements, size_t size)
{
        void    *ptr;

        ptr = (void *)malloc(elements * size);
        if (!ptr)
                return (NULL);
        ft_bzero(ptr, elements * size);
        return (ptr);
}


#include "libft.h"
#include <stdlib.h>

char    *ft_strdup(const char *s1)
{
        char    *str;
        size_t  len;

        if (s1 == NULL)
                return (NULL);
        len = ft_strlen(s1);
        str = malloc(len + 1);
        if (!str)
                return (NULL);
        ft_memcpy(str, s1, len);
        str[len] = '\0';
        return (str);
}