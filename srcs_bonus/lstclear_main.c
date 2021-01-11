/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstclear_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 14:19:36 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:43:26 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/bonus.h"

static int	nb_free_done;

void	ft_del(void *content)
{
		*(char **)content = NULL;
		free(content);
		nb_free_done++;
}

void	 ft_lstclear_main(void)
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
		nb_free_done = 0;

		ft_lstclear(&elem2, &ft_del);
		if (elem && !elem2 && elem3 && elem4 && nb_free_done == 3)
		{
				green();
				printf("ft_lstclear ok\n");
				reset();
		}
		else
		{

				red();
				//		printf("%d\n", nb_free_done);
				//		ft_print_result(elem);
				//		ft_print_result(elem2);
				//		ft_print_result(elem3);
				ft_print_result(elem4);
				printf("ft_lstclear not ok\n");
				reset();
		}
}
