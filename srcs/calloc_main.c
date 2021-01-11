/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:58:26 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:42:48 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"

void	ft_calloc_main(void)
{
	char	*str0;
	char	*str1;
	char	*str2;
	char	*str00;
	char	*str11;
	char	*str22;

	if (!(str0 = (char*)ft_calloc(30, 2) ))
	{
		red();
		printf("ft_calloc failled to alloc\n");
		reset();
	}
	if (!(str00 = (char*)calloc(30, 2) ))
	{
		red();
		printf("calloc failled to alloc\n");
		reset();
	}
	str1 = (char*)ft_calloc(0, 1);
	str2 = (char*)ft_calloc(30, 0);
	str11 = (char*)calloc(0, 1);
	str22 = (char*)calloc(30, 0);
	if (memcmp(str0, str00, 60) == 0 && memcmp(str1, str11, 0) == 0 && memcmp(str2, str22,0) == 0)
	{
		green();
		printf("ft_calloc ok\n");
		reset();

	}
	else
	{
		red();
		printf("ft_calloc not ok\n");
		reset();
	}
}
