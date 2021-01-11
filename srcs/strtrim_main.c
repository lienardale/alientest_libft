/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 15:01:06 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:42:48 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"

void	ft_strtrim_main(void)
{
	char s1[] = "";
	char s2[] = "a";
	char s3[] = "aaaaaaaaaqwertyaaaaaaaaqwertyaaaaa";
	char set1[] = "";
	char set2[] = "a";
	char set3[] = "1";

	char *s11 = s1;
	char *s12 = s1;
	char *s13 = s1;
	char *s21 = s2;
	char *s22 = s1;
	char *s23 = s2;
	char *s31 = s3;
	char s32[] = "qwertyaaaaaaaaqwerty";
	char *s33 = s3;

	char *tmp;
	size_t ok = 0;

	tmp = ft_strtrim(s1, set1);
	if (ft_strncmp(tmp, s11, ft_strlen(s11)) != 0)
	{
		red();
		printf("ft_strtrim test 1-1 not ok\n");
		reset();
		ok++;
	}
	tmp = ft_strtrim(s1, set2);
	if (ft_strncmp(tmp, s12, ft_strlen(s12)) != 0)
	{
		red();
		printf("ft_strtrim test 1-2 not ok\n");
		reset();
		ok++;
	}
	tmp = ft_strtrim(s1, set3);
	if (ft_strncmp(tmp, s13, ft_strlen(s13)) != 0)
	{
		red();
		printf("ft_strtrim test 1-3 not ok\n");
		reset();
		ok++;
	}
	tmp = ft_strtrim(s2, set1);
	if (ft_strncmp(tmp, s21, ft_strlen(s21)) != 0)
	{
		red();
		printf("ft_strtrim test 2-1 not ok\n");
		printf("expected:|%s|\n", s21);
		printf("result:|%s|\n", tmp);
		reset();
		ok++;
	}
	tmp = ft_strtrim(s2, set2);
	if (ft_strncmp(tmp, s22, ft_strlen(s22)) != 0)
	{
		red();
		printf("ft_strtrim test 2-2 not ok\n");
		reset();
		ok++;
	}
	tmp = ft_strtrim(s2, set3);
	if (ft_strncmp(tmp, s23, ft_strlen(s23)) != 0)
	{
		red();
		printf("ft_strtrim test 2-3 not ok\n");
		printf("expected:|%s|\n", s23);
		printf("result:|%s|\n", tmp);
		reset();
		ok++;
	}
	tmp = ft_strtrim(s3, set1);
	if (ft_strncmp(tmp, s31, ft_strlen(s31)) != 0)
	{
		red();
		printf("ft_strtrim test 3-1 not ok\n");
		reset();
		ok++;
	}
	tmp = ft_strtrim(s3, set2);
	if (ft_strncmp(tmp, s32, ft_strlen(s32)) != 0)
	{
		red();
		printf("ft_strtrim test 3-2 not ok\n");
		reset();
		ok++;
	}
	tmp = ft_strtrim(s3, set3);
	if (ft_strncmp(tmp, s33, ft_strlen(s33)) != 0)
	{
		red();
		printf("ft_strtrim test 3-3 not ok\n");
		reset();
		ok++;
	}
	tmp = ft_strtrim(NULL, NULL);
	if (tmp != NULL)
	{
		red();
		printf("ft_strtrim test NULL1 not ok\n");
		reset();
		ok++;
	}
	tmp = ft_strtrim(s3, NULL);
	if (tmp != NULL)
	{
		red();
		printf("ft_strtrim test NULL2 not ok\n");
		reset();
		ok++;
	}
	tmp = ft_strtrim(NULL, set2);
	if (tmp != NULL)
	{
		red();
		printf("ft_strtrim test NULL3 not ok\n");
		reset();
		ok++;
	}
	if (ok == 0)
	{
		green();
		printf("ft_strtrim ok\n");
		reset();
	}
}
