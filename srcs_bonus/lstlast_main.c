/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstlast_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 12:42:49 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:43:42 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/bonus.h"

void	ft_lstlast_main(void)
{
	size_t		ok = 0;
	t_list		*val;
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;

	char		*str[4];
	str[0] = "lorem";
	str[1] = "ipsum";
	str[2] = "dolor";
	str[3] = "sit";

	elem = ft_lstnew(ft_strdup(str[0]));
	elem2 = ft_lstnew(ft_strdup(str[1]));
	elem3 = ft_lstnew(ft_strdup(str[2]));
	elem4 = ft_lstnew(ft_strdup(str[3]));
	
	elem->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	
	val = ft_lstlast(elem);
	if (strcmp(val->content, str[3]) != 0)
	{
		red();
		printf("ft_lstlast not ok with basic input\n");
		reset();
		ok++;
	}
	
	elem->next = NULL;
	val = ft_lstlast(elem);
	if (strcmp(val->content, str[0]) != 0)
	{
		red();
		printf("ft_lstlast not ok with single element input\n");
		reset();
		ok++;
	}
	
/*	elem = NULL;
	val = ft_lstlast(elem);
	if (strcmp(val->content, NULL) != 0)
	{
		red();
		printf("ft_lstlast should segfault\n");
		reset();
		ok++;
	}
*/	if (ok == 0)
	{
		green();
		printf("ft_lstlast ok\n");
		reset();
	}
}
