/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperriol <bperriol@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:47:57 by bperriol          #+#    #+#             */
/*   Updated: 2022/11/14 14:40:47 by bperriol         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	iter(unsigned int i, char *c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	else if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

char	ft_mapi(unsigned int i, char c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

void	ft_iteri(unsigned int i, char *s)
{
	if (s[i] == 'a')
		s[i] = 'm';
}

void	ft_delone(void *content)
{
	free(content);
}

void	ft_iterlst(void *content)
{
	int	i;

	i = 0;
	while (((char *)content)[i] != '\0')
	{
		if (((char *)content)[i] == 'e')
			((char *)content)[i] = 'j';
		i++;
	}
}

void	*ft_maplist(void *content)
{
	int	i;

	i = 0;
	while (((char *)content)[i] != '\0')
	{
		if (((char *)content)[i] == 'j')
			((char *)content)[i] = 'k';
		i++;
	}
	return (content);
}

int	main(void)
{
	int	c = 'a';
	char str[50] = "salut ca va ouais et toi youpi bisous tchao !";
	char str2[50] = "salut ca va ouais et toi youpi bisous tchao !";
	char	dst[50];
	char	src[] = "SAlut copie ca ste plait";
	char	dstcat[15];
	memset(dstcat, 0, 15);
	memset(dstcat, 'r', 6);
	dstcat[11] = 'a';
	char	srccat[] = "lorem";
	char	chr[] = "tripouille";


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
	
	ft_strlcpy(dstcat, "lorem", 5);
	printf("strlcpy = %s\n", dstcat);
	
	printf("dst = %s\n", dst);
	printf("dst = %zu\n", a);
	size_t cat = ft_strlcat(dstcat, srccat, 15);
	printf("dstcat = %s\n", dstcat);
	printf("dstcat = %zu\n", cat);
	printf("toupper = %d\n", ft_toupper('d'));
	printf("tolower = %d\n", ft_tolower('U'));
	char *p = ft_strchr(chr, 't' + 256);
	printf("strchr =%s\n", p);
	char *pp = ft_strrchr("bonjour", 'b' + 256);
	printf("strrchr =%s\n", pp);

	char	s1[50] = "salut ca va ?";
	char	s2[50] = "salut sa va ?";
	printf("strncmp = %d\n", ft_strncmp(s1, s2, 7));
	
	printf("strncmp = %d\n", ft_strncmp("test\200", "test\10", 6));

	char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    const unsigned int size = 10;

    void * found = ft_memchr( data, 57, size );
    printf( "57 is %s\n", ( found != NULL ? "found" : "not found" ) );


    found = ft_memchr( data, 50, size );
    printf( "50 is %s\n", ( found != NULL ? "found" : "not found" ) );
    if ( found != NULL ) {
        printf( "La valeur à la position calculée est %d\n", *((char *) found) );
    }
	
	char *strtest1 = ft_memchr("bonjourno", 'n', 2);
	char *strtest2 = memchr("bonjourno", 'n', 2);
	printf("test memchr %s et %s\n", strtest1, strtest2);

	int array1 [] = { 54, 85, 20, 63, 21 };
	int array2 [] = { 54, 85, 15, 63, 21 };
    size_t sizearray = sizeof( int ) * 5;

	printf("memcmp array 1 array 2 = %d\n", ft_memcmp(array1, array2, sizearray));

	printf("test memcmp %d et %d \n", memcmp("abcdefghij", "abcdefgxyz", 7), ft_memcmp("abcdefghij", "abcdefgxyz", 7));

	char	haystack[50] = "cherche tata dans cette phrase please !";
	char	needle[5] = "tte";
	printf("strnstr = %s\n", ft_strnstr(haystack, needle, 30));

	printf("atoi = %d\n", ft_atoi("  	  		492233720368524775808aghd"));

	int	*pcalloc = (int *) calloc(20, sizeof(int));
	printf("ii = %d et p calloc = %d\n\n\n", 5, pcalloc[5]);

	char	move1[] = "0123456789abcdef987654321";
	char	move2[] = "0123456789abcdef987654321";
	printf("memmove = %s\n", memmove(move1 + 8, move1+9, 10));
	printf("memmove = %s\n", ft_memmove(move2 + 8, move2+9, 10));

	//djkbvjdbgerfgeio
	char strdup1[50] = "chaine a cor";
	printf("strdup = %s\n", ft_strdup(strdup1));

	char	sub[50] = "lorem ipsum dolor sit amet";
	printf("substr = %s\n", ft_substr(sub, 7, 0));

	char	join1[50] = "salut tu fais quoi?";
	char	join2[50] = "Je code pourquoi ?";
	printf("strjoin = %s\n", ft_strjoin(join1, join2));

	char	trim[50] = "    .   . .  ";
	char	trimset[50] = " .";
	printf("strtrim =%s\n", ft_strtrim(trim, trimset));

	char	**sspp = ft_split("salut ya pas de u ici", 'z');
	
	int	isplit = 0;
	while (sspp[isplit])
		printf("split = %s\n", sspp[isplit++]);
	printf("split = %s\n", sspp[isplit++]);

	printf("itoa = %s\n", ft_itoa(-2147483648));
	
	char	*mapi;
	mapi = ft_strdup("LoReM iPsUm");
	char	(*f_ptr)(unsigned int, char);
	
	f_ptr = &ft_mapi;
	printf("strmapi =%s\n", ft_strmapi(mapi, f_ptr));
	
	char iteri[] = "LoReM iPsUm";
	void	(*f_ptr2)(unsigned int, char *);
	f_ptr2 = &ft_iteri;
	ft_striteri(iteri, &iter);
	printf("ft_iteri = %s\n", iteri);
	
	ft_putchar_fd('g', 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("salut ca marche ?\n", open("text.txt", O_WRONLY | O_CREAT));
	ft_putendl_fd("ecris ca vas y", open("text.txt", O_WRONLY | O_CREAT));
	ft_putnbr_fd(-256486, 1);

	char *fcontent = malloc(sizeof("salut !"));
	fcontent = "salut";
	t_list	*begin = ft_lstnew(fcontent);
	printf("\nlstnew = %s\n", begin->content);
	t_list	*before1 = ft_lstnew(ft_strdup("before1 !"));
	t_list	*before2 = ft_lstnew(ft_strdup("before2 !"));
	t_list	*before3 = ft_lstnew(ft_strdup("before3 !"));
	t_list	*before4 = ft_lstnew(ft_strdup("before4 !"));
	ft_lstadd_front(&begin, before1);
	ft_lstadd_front(&begin, before2);
	ft_lstadd_front(&begin, before3);
	ft_lstadd_front(&begin, before4);

	t_list	*back = ft_lstnew(ft_strdup("laste"));
	ft_lstadd_back(&begin, back);
	
	t_list *save_begin = ft_lstnew(ft_strdup("save"));
	save_begin->next = begin;
	//ft_lstclear(&begin, &ft_delone);
	ft_lstiter(begin, &ft_iterlst);
	while (begin)
	{
		printf("list content = %s\n", begin->content);
		begin = begin->next;
	}
	begin = save_begin->next;
	printf("lstsize = %d\n", ft_lstsize(begin));
	t_list	*last = ft_lstlast(begin);
	printf("lstlast = %s\n", last->content);

	t_list	*copylst = ft_lstmap(begin, &ft_maplist, &ft_delone);
	while (copylst)
	{
		printf("copylist = %s\n", copylst->content);
		copylst = copylst->next;
	}
}
