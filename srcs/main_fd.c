/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_fd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 13:48:38 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:51:30 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"

int main(int ac, char **av)
{
	(void)ac;
	ft_putchar_fd(*av[1], 1);
	ft_putendl_fd(av[2], 1);
	ft_putnbr_fd((int)av[3], 1);
	ft_putstr_fd(av[4], 1);
}
