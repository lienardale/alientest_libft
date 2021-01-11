/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 19:10:51 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:47:52 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/bonus.h"

void red(void)
{
	printf("\033[1;31m");
}

void green(void)
{
	printf("\033[0;32m");
}

void reset(void)
{
	printf("\033[0m");
}

void	ft_print_result(t_list *elem)
{
	int	len = 0;
	while (((char *)elem->content)[len])
		len++;
	write(1, elem->content, len);
	write(1, "\n",1);
}

int main(void)
{
	printf("\n Fontions bonus \n");
	ft_lstadd_back_main();
	ft_lstadd_front_main();
	ft_lstclear_main();
	ft_lstdelone_main();
	ft_lstiter_main();
	ft_lstlast_main();
	ft_lstmap_main();
	ft_lstnew_main();
	ft_lstsize_main();

/*
	char src[] = "salut";
	char src1[] = "salut";
	printf("|%s|\n", memmove(NULL, NULL, strlen(src)));
	printf("|%s|\n", ft_memmove(NULL, NULL, strlen(src1)));
*/
/*	if(!(printf("%zu\n", strlcat(NULL, "coucou", 1))))
		printf("strlcat segfault comme prevu");

	ft_strlcat(NULL, "coucou", 0);
	printf("caca\n");
*/	
	printf("\n");
//	system("leaks a.out");
	return (0);
}
