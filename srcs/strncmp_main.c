/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 18:43:30 by alienard          #+#    #+#             */
/*   Updated: 2021/06/02 14:22:30 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"
#include <stdbool.h>

int		sgn(int i){
	if (0< i)
		return 1;
	else if (0==i)
		return 0;
	else
		return -1;
}

void	ft_strncmp_main(void)
{
	const char *s1 = "qwertyuiopasdfghjklzxcvbnm12345678";
	const char *s2 = "qwertyuizxcvbnm12345678";
	const char *s3 = "";
	const char *s4 = "q";

	size_t n1 = 12;
	size_t n2 = 60;
	size_t n3 = 0;
	size_t n4 = 1;


	const char *str[]={s1, s2, s3, s4};
	size_t n[] = {n1, n2, n3, n4};

	bool error = false;

	for (int i = 0; i < 4 ; i++){
		for(int j = 0; j < 4; j++){
			if (sgn(strncmp(str[i], str[j], strlen(str[j]))) != sgn(ft_strncmp(str[i], str[j], strlen(str[j])))){
				red();
				printf("ft_strncmp ERROR :\nstr[i]=|%s|\nstr[j]=|%s|\nsize_t=|%zu|\n", str[i], str[j], strlen(str[j]));
				printf("ret true:%d\n", strncmp(str[i], str[j], strlen(str[j])));
				printf("ret yours:%d\n\n", ft_strncmp(str[i], str[j], strlen(str[j])));
				reset();
				error = true;
				break ;
			}
			if (sgn(strncmp(str[i], str[j], n[j])) != sgn(ft_strncmp(str[i], str[j], n[j]))){
				red();
				printf("ft_strncmp ERROR :\nstr[i]=|%s|\nstr[j]=|%s|\nsize_t=|%zu|\n", str[i], str[j], n[i]);
				printf("ret true:%d\n", strncmp(str[i], str[j], n[j]));
				printf("ret yours:%d\n\n", ft_strncmp(str[i], str[j], n[j]));
				reset();
				error = true;
				break ;
			}
		}
	}

	if(!error){

		green();
		printf("ft_strncmp ok\n");
		reset();
	}

	//printf("%d\n", strncmp(NULL, s1, n4));
	//printf("%d\n", ft_strncmp(NULL, s1, n4));
	//printf("%d\n", strncmp(NULL, NULL, n4));
	//printf("%d\n", ft_strncmp(NULL, NULL, n4));
	//printf("%d\n", strncmp(s1, NULL, n4));
//	printf("%d\n", ft_strncmp(s1, NULL, n4));
}
