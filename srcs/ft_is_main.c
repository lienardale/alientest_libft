/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:23:32 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:42:48 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"

void	ft_is_main(void)
{
	if (ft_isalpha('f') == 1 && ft_isalpha('1') == 0
		&& ft_isdigit('5') == 1 && ft_isdigit('~') == 0
		&& ft_isalnum('d') == 1 && ft_isalnum(';') == 0
		&& ft_isascii(127) == 1 && ft_isascii(128) == 0
		&& ft_isprint(126)== 1 && ft_isprint(127) == 0
		&& ft_toupper('a') == 'A' && ft_toupper('A') == 'A'
		&& ft_tolower('a') == 'a' && ft_tolower('A') == 'a')
	{
		green();
		printf("ft_is* && ft_to* ok\n");
		reset();
	}
	else
	{
		red();
		printf("ft_is* || ft_to* not ok\n");
		reset();
	}
}
