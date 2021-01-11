/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_back_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 13:34:39 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:43:17 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/bonus.h"

void	 ft_lstadd_back_main(void)
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
	ft_lstadd_back(&begin, elem);
	ft_lstadd_back(&begin, elem2);
	ft_lstadd_back(&begin, elem3);
	ft_lstadd_back(&begin, elem4);
	while (begin)
	{
		if (strcmp(begin->content, str[i]) != 0)
		{
			red();
			printf("ft_lstadd_back not ok\n");
			reset();
		}
		begin = begin->next;
		i++;
	}
	green();
	printf("ft_lstadd_back ok\n");
	reset();
}
