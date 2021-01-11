/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 20:30:03 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:42:48 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"

void	ft_split_main(void)
{
	char *s0 = "             olol";
	char *es0[1];
	es0[0] = "olol";
	char *s1 = "split     ||this|for|me|||||||!||||||||||||";
	char *es1[5];
	es1[0] = "split     ";
	es1[1] = "this";
	es1[2] = "for";
	es1[3] = "me";
	es1[4] = "!";

	size_t ok = 0;
	size_t i;

	i = 0;
	char **tmp = ft_split(s0, ' ');
	while (tmp[i])
	{
		if (strcmp(tmp[i], es0[i]))
		{
			red();
			printf("ft_split test 1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}
	tmp = ft_split(s1, '|');
	i = 0;
	while (tmp[i])
	{
		if (strcmp(tmp[i], es1[i]))
		{
			red();
			printf("ft_split test 2 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	char *s = "split  ||this|for|me|||||!|";
	i = 0;
	char **result = ft_split(s, '|');
	char *expected[5];
	expected[0] = "split  ";
	expected[1] = "this";
	expected[2] = "for";
	expected[3] = "me";
	expected[4] = "!";

	while (result[i])
	{
		if (strcmp(result[i], expected[i]))
		{
			red();
			printf("ft_split free test not ok\n");
			reset();
			ok++;
		}
		free(result[i]);
		i++;
	}
	free(result);

	if (ok == 0)
	{
		green();
		printf("ft_split ok\n");
		reset();
	}
}
/*
int main(void)
{
	ft_split_main();
	return (0);
}*/
