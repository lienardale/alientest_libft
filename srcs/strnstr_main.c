/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:05:08 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:42:48 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"

void	ft_strnstr_main(void)
{
	const char haystack0[] = "";
	const char haystack1[] = "ccc";
	const char haystack2[] = "2555 555555555555555555523ac";
	const char needle0[]="";
	const char needle1[]="c";
	const char needle2[]="ccc";
	size_t len0 = 0;
	size_t len1 = 20;
	size_t len2 = 40;

	if (strnstr(haystack0, needle0, len0) == ft_strnstr(haystack0, needle0,len0)
		&& strnstr(haystack0, needle0, len1) == ft_strnstr(haystack0, needle0,len1)
		&& strnstr(haystack0, needle0, len2) == ft_strnstr(haystack0, needle0,len2)
		&& strnstr(haystack0, needle1, len0) == ft_strnstr(haystack0, needle1,len0)
		&& strnstr(haystack0, needle1, len1) == ft_strnstr(haystack0, needle1,len1)
		&& strnstr(haystack0, needle1, len2) == ft_strnstr(haystack0, needle1,len2)
		&& strnstr(haystack0, needle2, len0) == ft_strnstr(haystack0, needle2,len0)
		&& strnstr(haystack0, needle2, len1) == ft_strnstr(haystack0, needle2,len1)
		&& strnstr(haystack0, needle2, len2) == ft_strnstr(haystack0, needle2,len2)
		&& strnstr(haystack1, needle0, len0) == ft_strnstr(haystack1, needle0,len0)
		&& strnstr(haystack1, needle0, len1) == ft_strnstr(haystack1, needle0,len1)
		&& strnstr(haystack1, needle0, len2) == ft_strnstr(haystack1, needle0,len2)
		&& strnstr(haystack1, needle1, len0) == ft_strnstr(haystack1, needle1,len0)
		&& strnstr(haystack1, needle1, len1) == ft_strnstr(haystack1, needle1,len1)
		&& strnstr(haystack1, needle1, len2) == ft_strnstr(haystack1, needle1,len2)
		&& strnstr(haystack1, needle2, len0) == ft_strnstr(haystack1, needle2,len0)
		&& strnstr(haystack1, needle2, len1) == ft_strnstr(haystack1, needle2,len1)
		&& strnstr(haystack1, needle2, len2) == ft_strnstr(haystack1, needle2,len2)
		&& strnstr(haystack2, needle0, len0) == ft_strnstr(haystack2, needle0,len0)
		&& strnstr(haystack2, needle0, len1) == ft_strnstr(haystack2, needle0,len1)
		&& strnstr(haystack2, needle0, len2) == ft_strnstr(haystack2, needle0,len2)
		&& strnstr(haystack2, needle1, len0) == ft_strnstr(haystack2, needle1,len0)
		&& strnstr(haystack2, needle1, len1) == ft_strnstr(haystack2, needle1,len1)
		&& strnstr(haystack2, needle1, len2) == ft_strnstr(haystack2, needle1,len2)
		&& strnstr(haystack2, needle2, len0) == ft_strnstr(haystack2, needle2,len0)
		&& strnstr(haystack2, needle2, len1) == ft_strnstr(haystack2, needle2,len1)
		&& strnstr(haystack2, needle2, len2) == ft_strnstr(haystack2, needle2,len2))
	{
		green();
		printf("ft_strnstr ok\n");
		reset();
	}
	else
	{
		red();
		printf("ft_strnstr not ok\n");
		reset();
	}

//	printf("%s\n", ft_strnstr(NULL, NULL, 2));
//	printf("%s\n", strnstr(NULL, NULL, 2));
//	printf("%s\n", strnstr(NULL, NULL, 0));
//	printf("%s\n", ft_strnstr(NULL, NULL, 0));
//	printf("%s\n", strnstr("cha", NULL, 2));
//	printf("%s\n", ft_strnstr("cha", NULL, 2));
//	printf("%s\n", strnstr(NULL, "char", 2));
//	printf("%s\n", ft_strnstr(NULL, "char", 2));
	
}
