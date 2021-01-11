/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 19:14:56 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:42:48 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"

void	ft_strjoin_main(void)
{
	char const s1[] = "bonjour ";
	char const s2[] = "";
	char const s3[] = "c'est moi !\0caca";
	char const s4[] = "!";
	char s11[] = "bonjour bonjour ";
	char s12[] = "bonjour ";
	char s13[] = "bonjour c'est moi !\0";
	char s14[] = "bonjour !";
	char s21[] = "bonjour ";
	char s22[] = "\0\0";
	char s23[] = "c'est moi !";
	char s24[] = "!";
	char s31[] = "c'est moi !bonjour ";
	char s32[] = "c'est moi !";
	char s33[] = "c'est moi !c'est moi !\0";
	char s34[] = "c'est moi !!";
	char s41[] = "!bonjour ";
	char s42[] = "!";
	char s43[] = "!c'est moi !";
	char s44[] = "!!";
	char	*tmp;
	size_t i;
	size_t ok = 0;

	i = 0;
	tmp = ft_strjoin(s1, s1);
	while (tmp[i] == s11[i] && s11[i])
		i++;
	if (i != ft_strlen(s11) || i != ft_strlen(tmp))
	{
		red();
		printf("test 1-1 ft_strjoin not ok\n");
		reset();
		ok++;
	}

	i = 0;
	tmp = ft_strjoin(s1, s2);
	while (tmp[i] == s12[i] && s12[i])
		i++;
	if (i != ft_strlen(s12) || i != ft_strlen(tmp))
	{
		red();
		printf("test 1-2 ft_strjoin not ok\n");
		reset();
		ok++;
	}

	i = 0;
	tmp = ft_strjoin(s1, s3);
	while (tmp[i] == s13[i] && s13[i])
		i++;
	if (i != ft_strlen(s13) || i != ft_strlen(tmp))
	{
		red();
		printf("test 1-3 ft_strjoin not ok\n");
		reset();
		ok++;
	}

	i = 0;
	tmp = ft_strjoin(s1, s4);
	while (tmp[i] == s14[i] && s14[i])
		i++;
	if (i != ft_strlen(s14) || i != ft_strlen(tmp))
	{
		red();
		printf("test 1-4 ft_strjoin not ok\n");
		reset();
		ok++;
	}

	i = 0;
	tmp = ft_strjoin(s2, s1);
	while (tmp[i] == s21[i] && s21[i])
		i++;
	if (i != ft_strlen(s21) || i != ft_strlen(tmp))
	{
		red();
		printf("test 2-1 ft_strjoin not ok\n");
		reset();
		ok++;
	}

	i = 0;
	tmp = ft_strjoin(s2, s2);
	while (tmp[i] == s11[i] && s22[i])
		i++;
	if (i != ft_strlen(s22) || i != ft_strlen(tmp))
	{
		red();
		printf("test 2-2 ft_strjoin not ok\n");
		reset();
		ok++;
	}

	i = 0;
	tmp = ft_strjoin(s2, s3);
	while (tmp[i] == s23[i] && s23[i])
		i++;
	if (i != ft_strlen(s23) || i != ft_strlen(tmp))
	{
		red();
		printf("test 2-3 ft_strjoin not ok\n");
		reset();
		ok++;
	}

	i = 0;
	tmp = ft_strjoin(s2, s4);
	while (tmp[i] == s24[i] && s24[i])
		i++;
	if (i != ft_strlen(s24) || i != ft_strlen(tmp))
	{
		red();
		printf("test 2-4 ft_strjoin not ok\n");
		reset();
		ok++;
	}

	i = 0;
	tmp = ft_strjoin(s3, s1);
	while (tmp[i] == s31[i] && s31[i])
		i++;
	if (i != ft_strlen(s31) || i != ft_strlen(tmp))
	{
		red();
		printf("test 3-1 ft_strjoin not ok\n");
		reset();
		ok++;
	}

	i = 0;
	tmp = ft_strjoin(s3, s2);
	while (tmp[i] == s32[i] && s32[i])
		i++;
	if (i != ft_strlen(s32) || i != ft_strlen(tmp))
	{
		red();
		printf("test 3-2 ft_strjoin not ok\n");
		reset();
		ok++;
	}

	i = 0;
	tmp = ft_strjoin(s3, s3);
	while (tmp[i] == s33[i] && s33[i])
		i++;
	if (i != ft_strlen(s33) || i != ft_strlen(tmp))
	{
		red();
		printf("test 3-3 ft_strjoin not ok\n");
		reset();
		ok++;
	}

	i = 0;
	tmp = ft_strjoin(s3, s4);
	while (tmp[i] == s34[i] && s34[i])
		i++;
	if (i != ft_strlen(s34) || i != ft_strlen(tmp))
	{
		red();
		printf("test 3-4 ft_strjoin not ok\n");
		reset();
		ok++;
	}

	i = 0;
	tmp = ft_strjoin(s4, s1);
	while (tmp[i] == s41[i] && s41[i])
		i++;
	if (i != ft_strlen(s41) || i != ft_strlen(tmp))
	{
		red();
		printf("test 4-1 ft_strjoin not ok");
		reset();
		ok++;
	}

	i = 0;
	tmp = ft_strjoin(s4, s2);
	while (tmp[i] == s42[i] && s42[i])
		i++;
	if (i != ft_strlen(s42) || i != ft_strlen(tmp))
	{
		red();
		printf("test 4-2 ft_strjoin not ok");
		reset();
		ok++;
	}

	i = 0;
	tmp = ft_strjoin(s4, s3);
	while (tmp[i] == s43[i] && s43[i])
		i++;
	if (i != ft_strlen(s43) || i != ft_strlen(tmp))
	{
		red();
		printf("test 4-3 ft_strjoin not ok\n");
		reset();
		ok++;
	}

	i = 0;
	tmp = ft_strjoin(s4, s4);
	while (tmp[i] == s44[i] && s44[i])
		i++;
	if (i != ft_strlen(s44) || i != ft_strlen(tmp))
	{
		red();
		printf("test 4-4 ft_strjoin not ok\n");
		reset();
		ok++;
	}
	if(ok == 0)
	{
		green();
		printf("ft_strjoin ok\n");
		reset();
	}
}
