/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 19:24:03 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:42:48 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"

void	ft_bzero_main(void)
{
    	char    s0[] = "qwerty";
    	char    s1[] = "qwerty";
    	char    s2[] = "qwerty";
    	char    s3[] = "qwerty";
    	char    s6[] = "\t\n\r\v\f\r";
    	char    s7[] = "\t\n\r\v\f\r";
	size_t ok = 0;
	size_t	i;
	i = 0;
	bzero(s0, 6);
	ft_bzero(s1, 6);
	while (i != 6)
	{
		if (strcmp(&s0[i], &s1[i]) != 0)
		{
			red();
			printf("ft_bzero not ok\n");
			reset();
			ok++;
			return ;
		}
		i++;
	}

	i = 0;
	bzero(s2, 4);
	ft_bzero(s3, 4);
	while (i != 4)
	{
		if (strcmp(&s2[i], &s3[i]) != 0)
		{
			red();
			printf("ft_bzero not ok\n");
			reset();
			ok++;
			return ;
		}
		i++;
	}

	i = 0;
	bzero(s6, 6);
	ft_bzero(s7, 6);
	while (i != 6)
	{
		if (strcmp(&s6[i], &s7[i]) != 0)
		{
			red();
			printf("ft_bzero not ok\n");
			reset();
			ok++;
			return ;
		}
		i++;
	}
	if (ok == 0)
	{
		green();
		printf("ft_bzero ok\n");
		reset();
	}

//	bzero(NULL, (1));
//	bzero(NULL, (0));
//	ft_bzero(NULL, (1));
//	ft_bzero(NULL, (0));
}
