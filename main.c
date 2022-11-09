/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:47:57 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/09 10:36:14 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	int	c = 'a';
	char str[50] = "salut ca va ouais et toi youpi bisous tchao !";
	char str2[50] = "salut ca va ouais et toi youpi bisous tchao !";
	char	dst[50];
	char	src[] = "SAlut copie ca ste plait";
	char	dstcat[50] = "conc :";
	char	srccat[] = "ca oui";
	char	chr[50] = "yo cherche la lettre";


	printf("isalpha c = %d\n", ft_isalpha(c));
	printf("isdigit c = %d\n", ft_isdigit(c));
	printf("isalnum c = %d\n", ft_isalnum(c));
	printf("isascii c = %d\n", ft_isascii(c));
	printf("isprint c = %d\n", ft_isprint(c));
	printf("strlen str = %zu\n", ft_strlen(str));
	printf("str = %s\n", str);
	ft_memset(str + 4, 'x', 5);
	printf("str memset = %s\n", str);
	ft_bzero(str2 + 8, 4);
	printf("bzero = %s\n\n\n", str2);

	char str3[50] = "salut ca va ouais et toi youpi bisous tchao !";
	char str4[50] = "salut ca va ouais et toi youpi bisous tchao !";
	char dest[50] = "aaaaaaaaaaaaaaaaaaaaaaaaaa";
	printf("memcpy = %s\n", ft_memcpy(dest, str3, 14));
	printf("str4 = %s\n", str4);
	ft_memmove(str4 + 12, str4 + 15, 5);
	printf("memmove str4 + 12, str4 + 15, 2= %s\n\n\n", str4);
	printf("src = %s\n", src);
	size_t a = ft_strlcpy(dst, src, 0);
	printf("dst = %s\n", dst);
	printf("dst = %zu\n", a);
	size_t cat = ft_strlcat(dstcat, srccat, 8);
	printf("dstcat = %s\n", dstcat);
	printf("dstcat = %zu\n", cat);
	printf("toupper = %d\n", ft_toupper('d'));
	printf("tolower = %d\n", ft_tolower('U'));
	char *p = ft_strchr(chr, 'z');
	printf("strchr = %s\n", p);
	char *pp = ft_strrchr(chr, 't');
	printf("strrchr = %s\n", pp);

	char	s1[50] = "salut ca va ?";
	char	s2[50] = "salut sa va ?";
	printf("strncmp = %d\n", ft_strncmp(s1, s2, 7));

	char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    const unsigned int size = 10;

    void * found = ft_memchr( data, 57, size );
    printf( "57 is %s\n", ( found != NULL ? "found" : "not found" ) );


    found = ft_memchr( data, 50, size );
    printf( "50 is %s\n", ( found != NULL ? "found" : "not found" ) );
    if ( found != NULL ) {
        printf( "La valeur à la position calculée est %d\n", *((char *) found) );
    }

	int array1 [] = { 54, 85, 20, 63, 21 };
	int array2 [] = { 54, 85, 15, 63, 21 };
    size_t sizearray = sizeof( int ) * 5;

	printf("memcmp array 1 array 2 = %d\n", ft_memcmp(array1, array2, sizearray));

	char	haystack[50] = "cherche tata dans cette phrase please !";
	char	needle[5] = "tte";
	printf("strnstr = %s\n", ft_strnstr(haystack, needle, 30));

	char	satoi[50] = " 	   		   -2147483648frjvrhvbcejdjnse fehr 6468";
	printf("atoi = %d\n", ft_atoi(satoi));

	int	*pcalloc = (int *) calloc(20, sizeof(int));
	printf("ii = %d et p calloc = %d\n\n\n", 5, pcalloc[5]);

	char	move1[] = "0123456789abcdef987654321";
	char	move2[] = "0123456789abcdef987654321";
	printf("memmove = %s\n", memmove(move1 + 8, move1+9, 10));
	printf("memmove = %s\n", ft_memmove(move2 + 8, move2+9, 10));

	//djkbvjdbgerfgeio
	char strdup1[50] = "chaine a cor";
	printf("strdup = %s\n", ft_strdup(strdup1));

	char	sub[50] = "voici la chaine a prendre en compte";
	printf("substr = %s\n", ft_substr(sub, 50, 50));
}
