/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:11:35 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:43:45 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/bonus.h"

void	*ft_map(void *b)
{
	char	*tmp;
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)b;
	tmp = ft_strdup(ptr);
	while (tmp[i])
	{
		tmp[i] += 1;
		i++;
	}
	return ((void *)tmp);
}

void	ft_delm(void *content)
{
	free(content);
}

void ft_lstmap_main(void)
{
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	t_list		*list;
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

	if (!(list = ft_lstmap(elem, &ft_map, &ft_delm)))
	{
		red();
		printf("allocation fail");
		reset();
		return ;
	}
	if (list == elem)
	{
		red();
		printf("New list not different from the old one\n");
		reset();
	}
	if (strcmp(list->content, "mpsfn") == 0) 
	{
		list = list->next;
		if (strcmp(list->content, "jqtvn") == 0)
		{
			list = list->next;
			if (strcmp(list->content, "epmps") == 0)
			{
				list = list->next;
				if(strcmp(list->content, "tju") == 0)
				{
					green();
					printf("ft_lstmap ok\n");
					reset();
				}
			}
		}
	}
	else
	{
		red();
		printf("ft_lstmap not ok\n");
		reset();
	}

/*	int i;
	i = 0;
	ft_print_result(list);
	while (list->next)
	{
		list = list->next;
		ft_print_result(list);
		i++;
	}*/
}
