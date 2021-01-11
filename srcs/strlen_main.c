/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 20:29:28 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:42:48 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"

void	ft_strlen_main(void)
{
	const char s1[] = "";
	const char s2[] = "kcfuhfnfjgbsjfm\0znschv";
	const char s3[] = "jkzscfhjnk\200kzhcvsfknsxscd";

	if (strlen(s1) == ft_strlen(s1) && strlen(s2) == ft_strlen(s2)
			&& strlen(s3) == ft_strlen(s3))
	{
		green();
		printf("ft_strlen ok\n");
		reset();
	}
	else
	{
		red();
		printf("ft_strlen not ok\n");
		reset();
	}
}
