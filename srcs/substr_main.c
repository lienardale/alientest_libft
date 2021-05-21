/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:47:15 by alienard          #+#    #+#             */
/*   Updated: 2021/05/21 11:44:56 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"

void	ft_substr_main(void)
{
	char const s[] = "";
	char const s1[] = "q";
	char const s2[] = "qwertyuiopasdfghjklzxcvbnm";
	char *tmp;
	size_t ok = 0;
	
	tmp = ft_substr(s, 0, 0);
	if (!(ft_strlen(tmp) == 0 && tmp[0] == 0))
	{
		red();
		printf("ft_substr not ok with test 1 : s = "", start = 0, len = 0\n");
		reset();
		ok++;
	}
    free(tmp);
	tmp = ft_substr(s, 3, 0);
	if (!(ft_strlen(tmp) == 0 && tmp[0] == 0))
	{
		red();
		printf("ft_substr not ok with test 2 : s = "", start = 3, len = 0\n");
		reset();
		ok++;
	}
    free(tmp);
	tmp = ft_substr(s, 0, 3);
	if (!(ft_strlen(tmp) == 0 && tmp[0] == 0))
	{
		red();
		printf("ft_substr not ok with test 3 : s = "", start = 0, len = 3\n");
		reset();
		ok++;
	}
    free(tmp);
	tmp = ft_substr(s1, 3, 0);
	if (!(ft_strlen(tmp) == 0 && tmp[0] == 0))
	{
		red();
		printf("ft_substr not ok with test 4 : s = q, start =3, len = 0\n");
		reset();
		ok++;
	}
    free(tmp);
	tmp = ft_substr(s1, 0, 3);
	if (!(ft_strlen(tmp) == 1 && tmp[0] == 'q'))
	{
		red();
		printf("ft_substr not ok with test 5 : s = q, start = 0, len = 3\n");
		reset();
		ok++;
	}
    free(tmp);
	tmp = ft_substr(s1, 40, 3);
	if (!(ft_strlen(tmp) == 0 && tmp[0] == 0))
	{
		red();
		printf("ft_substr not ok with test 6 : s = q, start = 40, len = 3\n");
		reset();
		ok++;
	}
    free(tmp);
	tmp = ft_substr(s1, 5, 50);
	if (!(ft_strlen(tmp) == 0 && tmp[0] == 0))
	{
		red();
		printf("ft_substr not ok with test 7 : s = q, start = 5, len = 50\n");
		reset();
		ok++;
	}
    free(tmp);
	tmp = ft_substr(s1, 5, 5);
	if (!(ft_strlen(tmp) == 0 && tmp[0] == 0))
	{
		red();
		printf("ft_substr not ok with test 8 : s = q, start = 5, len = 5\n");
		reset();
		ok++;
	}
    free(tmp);
	tmp = ft_substr(s1, ft_strlen((char*)s1)-1, ft_strlen((char*)s1));
	if (!(ft_strlen(tmp) == 1 && tmp[0] == 'q'))
	{
		red();
		printf("ft_substr not ok with test 9 : s = q, start = strlen(s) - 1, len = strlen(s)\n");
		reset();
		ok++;
	}
    free(tmp);
    /*
	tmp = ft_substr(s1, 5, -5);
	if (!(tmp == NULL))
	{
		red();
		printf("ft_substr not ok with test 10 : s = q, start = 5, len = -5\n");
		reset();
		ok++;
	}
    free(tmp);
    */
	tmp = ft_substr(s2, 3, 0);
	if (!(ft_strlen(tmp) == 0 && tmp[0] == 0))
	{
		red();
		printf("ft_substr not ok with test 11 : s = qwertyuiopasdfghjklzxcvbnm, start = 3, len = 0\n");
		reset();
		ok++;
	}
    free(tmp);
	tmp = ft_substr(s2, 0, 3);
	if (!(ft_strlen(tmp) == 3 && tmp[0] == 'q' && tmp[1] == 'w' && tmp[2] == 'e'))
	{
		red();
		printf("ft_substr not ok with test 12 : s = qwertyuiopasdfghjklzxcvbnm, start = 0, len = 3\n");
		reset();
		ok++;
	}
    free(tmp);
	tmp = ft_substr(s2, 40, 3);
	if (!(ft_strlen(tmp) == 0 && tmp[0] == 0))
	{
		red();
		printf("ft_substr not ok with test 13 : s = qwertyuiopasdfghjklzxcvbnm, start = 40, len = 3\n");
		reset();
		ok++;
	}
    free(tmp);
	tmp = ft_substr(s2, 5, 50);
	if (!(ft_strlen(tmp) == 21 && tmp[0] == 'y' && tmp[20] == 'm'))
	{
		red();
		printf("ft_substr not ok with test 14 : s = qwertyuiopasdfghjklzxcvbnm, start = 5, len = 50\n");
		reset();
		ok++;
	}
    free(tmp);
	tmp = ft_substr(s2, 5, 5);
	if (!(ft_strlen(tmp) == 5 && tmp[0] == 'y' && tmp[4] == 'p'))
	{
		red();
		printf("ft_substr not ok with test 15 : s = qwertyuiopasdfghjklzxcvbnm, start = 5, len = 5\n");
		reset();
		ok++;
	}
    free(tmp);
	tmp = ft_substr(s2, ft_strlen((char*)s1)-1, ft_strlen((char*)s1));
	if (!(ft_strlen(tmp) == 1 && tmp[0] == 'q'))
	{
		red();
		printf("ft_substr not ok with test 16 : s = qwertyuiopasdfghjklzxcvbnm, start = strlen(s) - 1, len = strlen(s)\n");
		reset();
		ok++;
	}
    free(tmp);
	/*
    tmp = ft_substr(s2, 5, -5);
	if (!(tmp == NULL))
	{
		red();
		printf("ft_substr not ok with test 17 : s = qwertyuiopasdfghjklzxcvbnm, start = 5, len = -5\n");
		reset();
		ok++;
	}
    free(tmp);
    */
	tmp = ft_substr(NULL, 5, 5);
	if (!(tmp == NULL))
	{
		red();
		printf("ft_substr not ok with test 18 : s = NULL, start = 5, len = 5\n");
		reset();
		ok++;
	}	
    free(tmp);
    if (ok == 0)
	{
		green();
		printf("ft_substr ok\n");
		reset();
	}
}
