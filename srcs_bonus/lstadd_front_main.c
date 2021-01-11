/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_front_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 12:04:31 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:43:21 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/bonus.h"

void	ft_lstadd_front_main(void)
{
	t_list		*begin;
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;

	char		*str[4];
	str[0] = "lorem";
	str[1] = "ipsum";
	str[2] = "dolor";
	str[3] = "sit";

	size_t i = 0;

	elem = ft_lstnew(ft_strdup(str[0]));
	elem2 = ft_lstnew(ft_strdup(str[1]));
	elem3 = ft_lstnew(ft_strdup(str[2]));
	elem4 = ft_lstnew(ft_strdup(str[3]));
	
	begin = NULL;
	ft_lstadd_front(&begin, elem4);
	ft_lstadd_front(&begin, elem3);
	ft_lstadd_front(&begin, elem2);
	ft_lstadd_front(&begin, elem);
	while (begin)
	{
		if (strcmp(begin->content, str[i]) != 0)
		{
			red();
			printf("ft_lstadd_front not ok\n");
			reset();
		}
		begin = begin->next;
		i++;
	}
	green();
	printf("ft_lstadd_front ok\n");
	reset();
}
