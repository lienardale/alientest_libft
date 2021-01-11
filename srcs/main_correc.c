/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_correc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 19:10:51 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:42:48 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"

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
	printf("\n Premiere partie \n");
	ft_memset_main();
	ft_bzero_main();
	ft_memcpy_main();
	ft_memccpy_main();
	ft_memmove_main();
	ft_memchr_main();
	ft_memcmp_main();
	ft_strlen_main();
	ft_is_main();
	ft_strchr_main();
	ft_strrchr_main();
	ft_strncmp_main();
	ft_strlcpy_main();
	ft_strlcat_main();
	ft_strnstr_main();
	ft_atoi_main();
	ft_calloc_main();
	ft_strdup_main();

	printf("\n Deuxieme partie \n");
	ft_substr_main();
	ft_strjoin_main();
	ft_strtrim_main();
	ft_split_main();
	ft_itoa_main();
	ft_strmapi_main();
/*	ft_putchar_fd_main();
	ft_putstr_fd_main();
	ft_putendl_fd_main();
	ft_putnbr_fd_main();
*/	

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
