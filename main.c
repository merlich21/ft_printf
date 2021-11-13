/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:12:40 by merlich           #+#    #+#             */
/*   Updated: 2021/11/13 22:50:52 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int main(void)
{
	int		num;	
	char	c;
	char	*str;
//	static char	a01;
	// static unsigned char a02;
	// static short a03;
	// static unsigned short a04;
	// static int a05;
	// static unsigned int a06;
	// static long a07;
	// static unsigned long a08;
	// static long long a09;
	// static unsigned long long a10;
	// static char *a11;
	// static void *a12;

	num = 42;
	c = 'a';
	str = "Hola Amigos!";
	ft_printf("\t%i\n", ft_printf("This %p is even stranger", (void *)-1));
	printf("\t%i\n", printf("This %p is even stranger", (void *)-1));

	
	// ft_printf("%i - %s - %p %d - %c - %u - %x %X %%", 20, "", (void *)-1, '\0', -20, -1, -1, 200000000);
	// printf("%i - %s - %p %d - %c - %u - %x %X %%", 20, "", (void *)-1, '\0', -20, -1, -1, 200000000);
//	ft_printf("%-5%\n");
//	printf("%-5%\n");
//	ft_printf("%i\n", ft_printf("%s\n", NULL));
//	ft_printf("%5p", NULL);
	// ft_printf("%p\n", &a01);
	// printf("%p\n", &a01);

//	printf("%*s", 32, "abc");
	//printf("%i\n", printf("%c", 0));
	//ft_printf("%i\n", ft_printf("%c", 0));
	//ft_printf("%*s", 32, "abc");

	//ft_printf("hello, %s.", NULL);
	// ft_printf("%i\n", ft_printf("%u\n", ((unsigned int) -1200)));
	// printf("%i\n", printf("%u\n", -1200));
	// ft_printf("%i\n", ft_printf("%x\n", -32));
	// printf("%i\n", printf("%x\n", -32));
	// ft_printf("Hello World!\n");
	// ft_printf("%c\n", c);
	// printf("%c\n", c);
	// ft_printf("%s\n", str);
	// printf("%s\n", str);
	// ft_printf("%d\n", -num);
	// printf("%d\n", -num);
	// ft_printf("%i\n", num);
	// printf("%i\n", num);
	// ft_printf("%%\n");
	// printf("%%\n");
	// ft_printf("%u\n", 147483648);
	// printf("%u\n", 147483648);
	// ft_printf("\nHi!\nMy name is %s.\nI am %d years old.\n%%\n", "Alexander", 25);
//	printf("\nHi!\nMy name is %s.\nI am %d years old.\n%%\n", "Alexander", 25);
	// ft_printf("%p\n", str);
	// printf("%p\n", str);
	// ft_printf("\n\n%x\n", 147483648);
	// printf("%x\n", 147483648);
	// ft_printf("%X\n", 147483648);
	// printf("%X\n", 147483648);
	// ft_printf("%x\n", 0x4011b4);
	// printf("%x\n", 0x4011b4);
	// ft_printf("%X\n", 0x4011b4);
	// printf("%X\n", 0x4011b4);
	// ft_printf("");
	// ft_printf(NULL);
	// printf("%i\n", printf(NULL));
	// printf("%i\n", ft_printf(NULL));
	// ft_printf("%i\n", ft_printf(NULL));
	// ft_printf("%i\n", ft_printf("Hello World!\n"));
	// ft_printf("%i\n", ft_printf("%c\n", c));
	// ft_printf("%i\n", ft_printf("%s\n", str));
	// ft_printf("%i\n", ft_printf("%d\n", -num));
	// ft_printf("%i\n", ft_printf("%i\n", num));
	// ft_printf("%i\n", ft_printf("%%\n"));
	// ft_printf("%i\n", ft_printf("%u\n", 147483648));
	// ft_printf("%i\n", ft_printf("\nHi!\nMy name is %s.\nI am %d years old.\n%%\n", "Alexander", 25));
//	ft_printf("%i\n", ft_printf("%p\n", str));
  //  printf("%i\n", printf("%p\n", str));
	// ft_printf("%i\n", ft_printf("%x\n", 0x4011b4));
	// ft_printf("%i\n", ft_printf("%X\n", 0x4011b4));
	// printf("###################\n");
	// printf("%i\n", printf("Hello World!\n"));
	// printf("%i\n", printf("%c\n", c));
	// printf("%i\n", printf("%s\n", str));
	// printf("%i\n", printf("%d\n", -num));
	// printf("%i\n", printf("%i\n", num));
	// printf("%i\n", printf("%%\n"));
	// printf("%i\n", printf("%u\n", 147483648));
	// printf("%i\n", printf("\nHi!\nMy name is %s.\nI am %d years old.\n%%\n", "Alexander", 25));
	// printf("%i\n", printf("%p\n", str));
	// printf("%i\n", printf("%x\n", 0x4011b4));
	// printf("%i\n", printf("%X\n", 0x4011b4));
	// ft_printf("Hello World!\t");
	// ft_printf("Hello World!\\");
	// ft_printf("Hello World!\"");
	// ft_printf("Hello World!\a");
	// ft_printf("Hello World!\b");
	// ft_printf("Hello World!");
	// ft_printf("Hello World!\e");
	// ft_printf("Hello World!\f");
	// ft_printf("Hello Worl\rd!");
	// ft_printf("Hello World!\r");
	// ft_printf("Hello World!\t");
	// ft_printf("Hello World!\v");
	return (0);
}