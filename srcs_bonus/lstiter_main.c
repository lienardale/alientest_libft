/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstiter_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 14:45:05 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:43:34 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/bonus.h"

void	ft_modify_list_with_d(void *elem)
{
	int		len;
	char		*content;

	len = 0;
	content = (char *)elem;
	while (content[len])
	{
		content[len++] = 'd';
	}
}

void  ft_lstiter_main(void)
{
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	char		str [] = "lorem";
	char		str2 [] = "ipsum";
	char		str3 [] = "dolor";
	char		str4 [] = "sit";

	elem = ft_lstnew(ft_strdup(str));
	elem2 = ft_lstnew(ft_strdup(str2));
	elem3 = ft_lstnew(ft_strdup(str3));
	elem4 = ft_lstnew(ft_strdup(str4));
	
	elem->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	
	ft_lstiter(elem, &ft_modify_list_with_d);
	if (strcmp(elem->content, "ddddd") == 0 && strcmp(elem2->content, "ddddd") == 0
		&& strcmp(elem3->content, "ddddd") == 0 
		&& strcmp(elem4->content, "ddd") == 0)
	{
		green();
		printf("ft_lstiter ok\n");
		reset();
	}
	else
	{
		red();
		printf("ft_lstiter not ok\n");
		reset();
	}
//	ft_print_result(elem);
}

