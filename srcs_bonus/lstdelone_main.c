/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstdelone_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 13:38:41 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:43:29 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/bonus.h"

void	ft_delo(void *content)
{
	free(content);
}

void	 ft_lstdelone_main(void)
{
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	char	*str[4];
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

	ft_lstdelone(elem3, &ft_delo);
	if (strcmp((elem3->content), str[2]) != 0 
			&& strcmp((elem4->content), str[3]) == 0
			&& strcmp((elem->content), str[0]) == 0
			&& strcmp((elem2->content), str[1]) == 0)
	{
		green();
		printf("ft_lstdelone ok\n");
		reset();
		return ;
	}
	else
	{
		red();
		printf("ft_lstdelone not ok\n");
		reset();
	}
}
