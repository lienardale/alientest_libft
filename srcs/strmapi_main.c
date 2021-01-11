/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:10:25 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:42:48 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"

char	f(unsigned int i, char c)
{
	if (i >= 0)
	{
		c = 'a';
		return (c);
	}
	return (c);
}

void	ft_strmapi_main(void)
{
	size_t ok = 0;
	char *tab = "111111111111";
	if (strcmp(ft_strmapi(&tab[2], &f), "aaaaaaaaaa"))
	{
		red();
		printf("ft_strmapi test 1 not ok\n");
		reset();
		ok++;
	}
	char *tab2 = "111111111111";
	if (strcmp(ft_strmapi(&tab2[0], &f), "aaaaaaaaaaaa"))
	{
		red();
		printf("ft_strmapi test 2 not ok\n");
		reset();
		ok++;
	}
	char *caca = "";
	if (strcmp(ft_strmapi(&caca[0], &f), ""))
	{
		red();
		printf("ft_strmapi test 2 not ok\n");
		reset();
		ok++;
	}
	if (ft_strmapi(NULL, &f) != NULL)
	{
		red();
		printf("ft_strmapi test NULL0 not ok\n");
		reset();
		ok++;
	}
	if (ft_strmapi(&tab[2], NULL) != NULL)
	{
		red();
		printf("ft_strmapi test NULL1 not ok\n");
		reset();
		ok++;
	}
	if (ft_strmapi(NULL, NULL) != NULL)
	{
		red();
		printf("ft_strmapi test NULL2 not ok\n");
		reset();
		ok++;
	}
	if (ok == 0)
	{
		green();
		printf("ft_strmapi ok\n");
		reset();
	}
}
