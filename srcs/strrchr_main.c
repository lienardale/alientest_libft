/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:00:43 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:42:48 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"

void	ft_strrchr_main(void)
{
	const char *s1 = "qwertyuiopasdfghjklzxcvbnmg12345678";
	const char *s2 = "q";
	const char *s3 = "";
	int c1 = 'g';
	int c2 = '9';
	int c3 = '\0';
	
	if (strrchr(s1, c1) == ft_strrchr(s1, c1) && strrchr(s1, c2) == ft_strrchr(s1, c2)
		&& strrchr(s1, c3) == ft_strrchr(s1, c3)
		&& strrchr(s2, c1) == ft_strrchr(s2, c1)
		&& strrchr(s2, c2) == ft_strrchr(s2, c2)
		&& strrchr(s2, c3) == ft_strrchr(s2, c3)
		&& strrchr(s3, c1) == ft_strrchr(s3, c1)
		&& strrchr(s3, c2) == ft_strrchr(s3, c2)
		&& strrchr(s3, c3) == ft_strrchr(s3, c3))
	{
		green();
		printf("ft_strrchr ok\n");
		reset();
	}
	else
	{
		red();
		printf("ft_strrchr not ok\n");
		reset();
	}
}
