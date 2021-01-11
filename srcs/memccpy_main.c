/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 16:02:47 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:42:48 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"

void     ft_memccpy_main(void)
{
	char buff1[] = "qwweertyuiopasdfgjklzxcvbnm";
	char buff2[] = "qwweertyuiopasdfgjklzxcvbnm";
	char buff3[] = "the cake is a lie !\0I'm hidden lol \r\n";
	char buff4[] = "the cake is a lie !\0I'm hidden lol \r\n";
	char *src1 = "stringwith\200inside !";
	char src2[] = "test basic !";
	size_t ok = 0;
	size_t i;

	i = 0;
	memccpy(buff3, src2, ' ', 12);
	ft_memccpy(buff4, src2, ' ', 12);
	while (buff3[i] || buff4[i])
	{
		if (strcmp(&buff3[i], &buff4[i]) != 0)
		{
			red();
			printf("ft_memccpy1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	memccpy(buff1, src1, '\200', 21);
	ft_memccpy(buff2, src1, '\200', 21);
	while (buff1[i] || buff2[i])
	{
		if (strcmp(&buff1[i], &buff2[i]) != 0)
		{
			red();
			printf("ft_memccpy2 not ok\n");
			reset();
			ok++;
		}
		i++;
	}
	
	i = 0;
	memccpy(buff1, src1, 0600, 21);
	ft_memccpy(buff2, src1, 0600, 21);
	while (buff1[i] || buff2[i])
	{
		if (strcmp(&buff1[i], &buff2[i]) != 0)
		{
			red();
			printf("ft_memccpy2 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	if (memcmp(memccpy(buff3, src2, ' ', 12), ft_memccpy(buff4, src2, ' ', 12), strlen(buff3)) != 0)
	{
		red();
		printf("ft_memccpy4 not ok\n");
		reset();
		ok++;
	}

	if (ok == 0)
	{
		green();
		printf("ft_memccpy ok\n");
		reset();
	}
	

/*	char *tmp;

	char buff1[] = "qwweertyuiopasdfgjklzxcvbnm";
//	tmp = memccpy(NULL, NULL, 0, 0);
//	tmp = memccpy(NULL, buff1, 0, 0);
//	tmp = memccpy(buff1, NULL, 0, 0);
//	tmp = memccpy(NULL, NULL, 'a', 0);
//	tmp = memccpy(NULL, NULL, 0, 20);
//	tmp = memccpy(NULL, buff1, 0, 20);
//	tmp = memccpy(NULL, buff1, 'a', 20);
//	tmp = memccpy(buff1, NULL, 'a', 0);
//	tmp = memccpy(buff1, NULL, 0, 20);
//	tmp = memccpy(buff1, NULL, 'a', 20);
//	tmp = memccpy(buff1, NULL, 'a', 0);
//	tmp = memccpy(NULL, buff1, 'a', 0);
//	tmp = memccpy(buff1, buff1, 'a', 0);
//	printf("%s\n", tmp);
//	tmp = memccpy(buff1, buff1, 'a', 20);

	tmp = ft_memccpy(NULL, NULL, 0, 0); // return (null)
	printf("null?:%s\n", tmp);
	tmp = ft_memccpy(NULL, buff1, 0, 0); // return (null)
	printf("null?:%s\n", tmp);
	tmp = ft_memccpy(buff1, NULL, 0, 0); // return (null)
	printf("null?:%s\n", tmp);
	tmp = memccpy(buff1, NULL, 0, 0); // return (null)
	printf("null?:%s\n", tmp);
	tmp = ft_memccpy(NULL, NULL, 'a', 0); //return (null)
	printf("null?:%s\n", tmp);
//	tmp = ft_memccpy(NULL, NULL, 0, 20); //should segfault
//	printf("%s\n", tmp);
//	tmp = ft_memccpy(NULL, buff1, 0, 20); //segfault
//	printf("%s\n", tmp);
//	tmp = ft_memccpy(NULL, buff1, 'a', 20); //segfault
//	printf("%s\n", tmp);
	tmp = ft_memccpy(buff1, NULL, 'a', 0); //return (null)
	printf("null?:%s\n", tmp);
	tmp = memccpy(buff1, NULL, 'a', 0); //return (null)
	printf("null?:%s\n", tmp);
//	tmp = ft_memccpy(buff1, NULL, 0, 20); //segfault
//	printf("%s\n", tmp);
//	tmp = ft_memccpy(buff1, NULL, 'a', 20); //segfault
//	printf("%s\n", tmp);
	tmp = ft_memccpy(buff1, NULL, 'a', 0); //return (null)
	printf("null?:%s\n", tmp);
	tmp = memccpy(buff1, NULL, 'a', 0); //return (null)
	printf("null?:%s\n", tmp);
	tmp = ft_memccpy(NULL, buff1, 'a', 0);
	printf("%s\n", tmp);
	tmp = ft_memccpy(buff1, buff1, 'a', 0);
	printf("%s\n", tmp);
//	tmp = ft_memccpy(buff1, buff1, 'a', 20); //should abort
//	printf("abort?:%s\n", tmp);
//	tmp = memccpy(buff1, buff1, 'a', 20); //should abort
//	printf("abort?:%s\n", tmp);*/

}
