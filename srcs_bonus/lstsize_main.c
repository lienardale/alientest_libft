/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsize_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 12:25:34 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:43:52 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/bonus.h"

void	ft_lstsize_main(void)
{
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	char		c;

	char		str [] = "lorem";
	char		str2 [] = "ipsum";
	char		str3 [] = "dolor";
	char		str4 [] = "sit";
	size_t		ok = 0;

	elem = ft_lstnew(ft_strdup(str));
	elem2 = ft_lstnew(ft_strdup(str2));
	elem3 = ft_lstnew(ft_strdup(str3));
	elem4 = ft_lstnew(ft_strdup(str4));
		
	elem->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	c = ft_lstsize(elem);
	if (c != 4)
	{
		red();
		printf("ft_lstsize not ok basic lst\n");
		reset();
		ok++;
	}
	elem->next = NULL;
	c = ft_lstsize(elem);
	if (c != 1)
	{
		red();
		printf("ft_lstsize not ok lst 1 elem\n");
		reset();
		ok++;
	}
	elem = NULL;
	c = ft_lstsize(elem);
	if (c != 0)
	{
		red();
		printf("ft_lstsize not ok lst 0 elem\n");
		reset();
		ok++;
	}
	if (ok == 0)
	{
		green();
		printf("ft_lstsize ok\n");
		reset();
	}
}
