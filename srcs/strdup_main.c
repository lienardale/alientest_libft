/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:51:17 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:42:48 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"

void	ft_strdup_main(void)
{
	char str0[]= "test bateau";
	char str1[]= "t";
	char str2[]= "";

	char *tmp0;
	char *tmp1;

	size_t ok = 0;
	size_t i;

	i = 0;
	if(!(tmp0 = strdup(str0)))
	{
		red();
		printf("malloc fail\n");
		reset();
		return ;
	}
	if(!(tmp1 = strdup(str0)))
	{
		red();
		printf("malloc fail\n");
		reset();
		return ;
	}
	while (tmp0[i] || tmp1[i])
	{
		if (tmp0[i] != tmp1[i])
		{
			red();
			printf("ft_strdup not ok\n");
			reset();
			ok++;
		}
		i++;
	}
	
	i = 0;
	if(!(tmp0 = strdup(str1)))
	{
		red();
		printf("malloc fail\n");
		reset();
		return ;
	}
	if(!(tmp1 = strdup(str1)))
	{
		red();
		printf("malloc fail\n");
		reset();
		return ;
	}
	while (tmp0[i] || tmp1[i])
	{
		if (tmp0[i] != tmp1[i])
		{
			red();
			printf("ft_strdup not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	if(!(tmp0 = strdup(str2)))
	{
		red();
		printf("malloc fail\n");
		reset();
		return ;
	}
	if(!(tmp1 = strdup(str2)))
	{
		red();
		printf("malloc fail\n");
		reset();
		return ;
	}
	while (tmp0[i] || tmp1[i])
	{
		if (tmp0[i] != tmp1[i])
		{
			red();
			printf("ft_strdup not ok\n");
			reset();
			ok++;
		}
		i++;
	}
/*
	i = 0;
	if(!(tmp0 = strdup(NULL)))
	{
		red();
		printf("malloc fail\n");
		reset();
		return ;
	}
	if(!(tmp1 = strdup(NULL)))
	{
		red();
		printf("malloc fail\n");
		reset();
		return ;
	}
	while (tmp0[i] || tmp1[i])
	{
		if (tmp0[i] != tmp1[i])
		{
			red();
			printf("ft_strdup not ok\n");
			reset();
			ok++;
		}
		i++;
	}
*/
	if (ok==0)
	{
		green();
		printf("ft_strdup ok\n");
		reset();
	}
}
