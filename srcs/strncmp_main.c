/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 18:43:30 by alienard          #+#    #+#             */
/*   Updated: 2021/05/21 11:48:05 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"

void	ft_strncmp_main(void)
{
	const char *s1 = "qwertyuiopasdfghjklzxcvbnm12345678";
	const char *s2 = "qwertyuizxcvbnm12345678";
	const char *s3 = "";
	const char *s4 = "q";

	size_t n1 = 12;
	size_t n2 = 60;
	size_t n3 = 0;
	size_t n4 = 1;

	if(strncmp(s1, s1, strlen(s1)) == ft_strncmp(s1, s1, strlen(s1))
	&& strncmp(s2, s2, strlen(s2)) == ft_strncmp(s2, s2, strlen(s2))
	&& strncmp(s3, s3, strlen(s3)) == ft_strncmp(s3, s3, strlen(s3))
	&& strncmp(s4, s4, strlen(s4)) == ft_strncmp(s4, s4, strlen(s4))
	&& strncmp(s1, s2, n1) == ft_strncmp(s1, s2, n1)
	&& strncmp(s1, s2, n2) == ft_strncmp(s1, s2, n2)
	&& strncmp(s1, s2, n3) == ft_strncmp(s1, s2, n3)
	&& strncmp(s1, s2, n4) == ft_strncmp(s1, s2, n4)
	&& strncmp(s1, s3, n1) == ft_strncmp(s1, s3, n1)
	&& strncmp(s1, s3, n2) == ft_strncmp(s1, s3, n2)
	&& strncmp(s1, s3, n3) == ft_strncmp(s1, s3, n3)
	&& strncmp(s1, s3, n4) == ft_strncmp(s1, s3, n4)
	&& strncmp(s1, s4, n1) == ft_strncmp(s1, s4, n1)
	&& strncmp(s1, s4, n2) == ft_strncmp(s1, s4, n2)
	&& strncmp(s1, s4, n3) == ft_strncmp(s1, s4, n3)
	&& strncmp(s1, s4, n4) == ft_strncmp(s1, s4, n4))
	{
		green();
		printf("ft_strncmp ok\n");
		reset();
	}
	else
	{
		red();
		printf("ft_strncmp not ok\n");
		reset();
	}

	//printf("%d\n", strncmp(NULL, s1, n4));
	//printf("%d\n", ft_strncmp(NULL, s1, n4));
	//printf("%d\n", strncmp(NULL, NULL, n4));
	//printf("%d\n", ft_strncmp(NULL, NULL, n4));
	//printf("%d\n", strncmp(s1, NULL, n4));
//	printf("%d\n", ft_strncmp(s1, NULL, n4));
}
