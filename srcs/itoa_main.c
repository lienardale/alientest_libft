/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 17:08:40 by alienard          #+#    #+#             */
/*   Updated: 2021/05/21 11:55:48 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"

void	ft_itoa_main(void)
{
	char s0[] = "-2147483648";
	char s1[] = "2147483647";
	char s2[] = "0";
	char s3[] = "1";
	char s4[] = "-2147483647";
	char s5[] = "2147483646";

	int i0 = -2147483648;
	int i1 = 2147483647;
	int i2 = 0;
	int i3 = 1;
	int i4 = -2147483647;
	int i5 = 2147483646;

	size_t ok = 0;
    char* ret;
	if (strcmp(s0, ret = ft_itoa(i0)))
	{
		red();
		printf("ft_itoa does not work with int min\n");
		reset();
		ok++;
	}
    free(ret);
	if (strcmp(s1, ret = ft_itoa(i1)))
	{
		red();
		printf("ft_itoa does not work with int max\n");
		reset();
		ok++;
	}		
    free(ret);
	if (strcmp(s2, ret = ft_itoa(i2)))
	{
		red();
		printf("ft_itoa does not work with 0\n");
		reset();
		ok++;
	}		
    free(ret);
	if (strcmp(s3, ret = ft_itoa(i3)))
	{
		red();
		printf("ft_itoa does not work with 1\n");
		reset();
		ok++;
	}		
    free(ret);
	if (strcmp(s4, ret = ft_itoa(i4)))
	{
		red();
		printf("ft_itoa does notwork with int min + 1\n");
		reset();
		ok++;
	}		
    free(ret);
	if (strcmp(s5, ret = ft_itoa(i5)))
	{
		red();
		printf("ft_itoa does not work with int max - 1\n");
		reset();
		ok++;
	}		
    free(ret);
	if (ok == 0)
	{
		green();
		printf("ft_itoa ok\n");
		reset();
	}
}
