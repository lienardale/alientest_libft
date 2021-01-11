/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:22:04 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:42:48 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"

void	ft_memcmp_main(void)
{
	const void *s1 = "qwertyuiopasdfghjklzxcvbnm12345678";
	const void *s2 = "qwertyuiopasdfghjklzxcvbnm12345678999";
	const void *s3 = "";
	size_t n1;
	size_t n2;
	size_t n3;
	
	n1 = 12;
	n2 = 40;
	n3 = 0;


	if(memcmp(s1, s2, n1) == ft_memcmp(s1, s2, n1)
		&& memcmp(s1, s2, n2) == ft_memcmp(s1, s2, n2)
		&& memcmp(s1, s3, n1) == ft_memcmp(s1, s3, n1)
		&& memcmp(s1, s2, n3) == ft_memcmp(s1, s2, n3))
	{
		green();
		printf("ft_memcmp ok\n");
		reset();
	}
	else
	{
	/*	printf("memcmp : %d\n", memcmp(s1, s2, n1));	
		printf("ft_memcmp : %d\n", ft_memcmp(s1, s2, n1));	
		printf("memcmp : %d\n", memcmp(s1, s2, n2));	
		printf("ft_memcmp : %d\n", ft_memcmp(s1, s2, n2));	
		printf("memcmp : %d\n", memcmp(s1, s3, n1));	
		printf("ft_memcmp : %d\n", ft_memcmp(s1, s3, n1));	
		printf("memcmp : %d\n", memcmp(s1, s2, n3));	
		printf("ft_memcmp : %d\n", ft_memcmp(s1, s2, n3));	
*/
		red();
		printf("ft_memcmp not ok\n");
		reset();
	}
}
