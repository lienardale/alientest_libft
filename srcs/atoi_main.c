/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:23:51 by alienard          #+#    #+#             */
/*   Updated: 2021/06/02 14:22:20 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"
#include <stdbool.h>
void ft_atoi_main(void)
{
	const char *i0 = "-2147483648";
	const char *i1 = "";
	const char *i2 = "    ";
	const char *i3 = " +123";
	const char *i4 = " +-123";
	const char *i5 = " --123";
	const char *i6 = "   -1 23";
	const char *i7 = "2147483647";

	const char *str[]={i0, i1, i2, i3, i4, i5, i6, i7};
	bool error = false;

	for (int i = 0; i < 7 ; i++){
		if (atoi(str[i]) != ft_atoi(str[i])){
			red();
			printf("ft_atoi ERROR :\nstr:|%s|\n", str[i]);
			printf("atoi:|%d|\n", atoi(str[i]));
			printf("ft_atoi:|%d|\n", ft_atoi(str[i]));
			reset();
			error = true;
			break ;

		}
	}
	if(!error){
		green();
		printf("ft_atoi ok\n");
		reset();
	}
}
