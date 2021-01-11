/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainlibft.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 19:12:29 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:42:19 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAINLIBFT_H
# define MAINLIBFT_H

# include "../../libft.h"
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void	red(void);
void	green(void);
void	reset(void);

void	ft_print_result(t_list *elem);

void	ft_memset_main(void);
void	ft_bzero_main(void);
void	ft_memcpy_main(void);
void	ft_memccpy_main(void);
void	ft_memmove_main(void);
void	ft_memchr_main(void);
void	ft_memcmp_main(void);
void	ft_strlen_main(void);
void	ft_is_main(void);
void	ft_strchr_main(void);
void	ft_strrchr_main(void);
void	ft_strncmp_main(void);
void	ft_strlcpy_main(void);
void	ft_strlcat_main(void);
void	ft_strnstr_main(void);
void	ft_atoi_main(void);
void	ft_calloc_main(void);
void	ft_strdup_main(void);

void	ft_substr_main(void);
void	ft_strjoin_main(void);
void	ft_strtrim_main(void);
void	ft_split_main(void);
void	ft_itoa_main(void);
void	ft_strmapi_main(void);


#endif
