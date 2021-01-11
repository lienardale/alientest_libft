/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 19:12:29 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 14:00:09 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# include "../../libft.h"
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void	red(void);
void	green(void);
void	reset(void);

void	ft_print_result(t_list *elem);

void	ft_lstadd_back_main(void);
void	ft_lstadd_front_main(void);
void	ft_lstclear_main(void);
void	ft_lstdelone_main(void);
void	ft_lstiter_main(void);
void	ft_lstlast_main(void);
void	ft_lstmap_main(void);
void	ft_lstnew_main(void);
void	ft_lstsize_main(void);

#endif
