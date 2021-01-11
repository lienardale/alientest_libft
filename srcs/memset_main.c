/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 20:20:51 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:42:48 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"

void     ft_memset_main(void)
{
    void    *b[100];
    if (memset(b, 48, 5) == ft_memset(b, 48, 5) && (memset(b, 128, 5) == ft_memset(b, 128, 5))
		    && (memset(b, 48, 99) == ft_memset(b, 48, 99))
		    && (memset(b, 48, 5) == ft_memset(b, 48, 5)))
    {
	    green();
	    printf("ft_memset ok\n");
	    reset();
    }
    else
    {
	    red();
	    printf("ft_memset not ok\n");
	    reset();
    }
/*	char *tmp;
	tmp = ft_memset(NULL, 0, 48);
	tmp = ft_memset(NULL, 48, 0);
	tmp = ft_memset(NULL, 0, 0);
	size_t i = 0;
	while (tmp[i++])
		printf("%c", tmp[i]);
*/
}
