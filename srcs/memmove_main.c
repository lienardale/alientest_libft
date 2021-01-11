/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 20:10:13 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:42:48 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"

void     ft_memmove_main(void)
{
    void    *dst;
    void	*dst1;
  //  void	*dst2;
//    void	*dst3;

 //   void     *src4 = "sfvvdcsfs3f24444\0";
 //   void     *src3 = "sfvvdcsfs3f24444\0";
//    char b[0xF0];
    size_t  len;
    len = 17;
    char buff1[] = "qwweertyuiopasdfgjklzxcvbnm";
    char buff2[] = "qwweertyuiopasdfgjklzxcvbnm";
    char buff3[] = "the cake is a lie !\0I'm hidden lol \r\n";
    char buff4[] = "the cake is a lie !\0I'm hidden lol \r\n";
    char *src1 = "stringwith\200inside !";
    char src2[] = "test basic !";
    size_t ok = 0;
    size_t i;

	dst = memmove(((void *)0), ((void *)0), 0);
	dst1 = ft_memmove(((void *)0), ((void *)0), 0);
	if (dst != dst1)
	{
		red();
		printf("ft_memmoveNULL not ok");
		reset();
		ok++;
	}

//	dst2 = memmove(((void *)0), NULL, 3);
//	printf("%p %s\n", dst2, dst2);
//	printf("%s\n", b);
//  	dst3 = ft_memmove(((void *)0), b, 3);
//	printf("%p %s\n", dst3, dst3);


	i = 0;
	memmove(buff3 + 4, buff3, 12);
	ft_memmove(buff4 + 4, buff4, 12);
	while (buff3[i] == buff4[i])
	{
		if (buff3[i+1] != buff4[i+1] && buff3[i] != '\0')
		{
			red();
			printf("ft_memmove1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	dst = memmove(buff1, buff1 + 5, 21);
	dst1 = ft_memmove(buff2, buff1 + 5, 21);
	while (buff1[i] ==  buff2[i])
	{
		if (buff1[i + 1] != buff2[i + 1] && buff1[i] != '\0')
		{
			red();
			printf("ft_memmove2 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	memmove(buff1, src1, 21);
	ft_memmove(buff2, src1, 21);
	while (buff1[i] || buff2[i])
	{
		if (strcmp(&buff1[i], &buff2[i]) != 0)
		{
			red();
			printf("ft_memmove3 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	if (memcmp(memmove(buff3, src2, 12), ft_memmove(buff4, src2, 12), strlen(buff3)) != 0)
	{
		red();
		printf("ft_memmove4 not ok\n");
		reset();
		ok++;
	}

	if (ok == 0)
	{
		green();
		printf("ft_memmove ok\n");
		reset();
	}
}
