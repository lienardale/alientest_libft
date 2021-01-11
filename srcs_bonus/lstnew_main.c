/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 20:48:17 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:43:49 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/bonus.h"

void	ft_lstnew_main(void)
{
	t_list		*elem;
	char	str [] = "lorem ipsum dolor sit";
	int		i = 42;
	size_t		ok = 0;
	
	
	if (!(elem = ft_lstnew(str)))
	{
		red();
		printf("malloc test char* fail\n");
		reset();
	}
	if (elem->content != str || elem->next!= NULL)
	{
		red();
		printf("ft_lstnew not ok test char*\n");
		reset();
	}
	if (!(elem = ft_lstnew(&i)))
	{
		red();
		printf("malloc test int fail\n");
		reset();
	}
	if (elem->content != &i || elem->next!= NULL)
	{
		red();
		printf("ft_lstnew not ok test int\n");
		reset();
	}
	if (!(elem = ft_lstnew(NULL)))
	{
		red();
		printf("malloc test NULL fail\n");
		reset();
	}
	if (elem->content != NULL || elem->next!= NULL)
	{
		red();
		printf("ft_lstnew not ok test NULL\n");
		reset();
	}
	if (ok == 0)
	{
		green();
		printf("ft_lstnew ok\n");
		reset();
	}
}
