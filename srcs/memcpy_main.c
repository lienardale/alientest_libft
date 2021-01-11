/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 20:04:16 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:42:48 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"

void     ft_memcpy_main(void)
{
   char src[] = "test basic du memcpy !";
   char buff1[0xF00];
   char buff2[0xF00];
   char buff3[40];
   char buff4[40];
//   char buff5[2];
   char buff6[2];
   size_t i;
   size_t ok = 0;

	bzero(buff3, 40);
	bzero(buff4, 40);
   i = 0; 
   memcpy(buff1, src, 22);
   ft_memcpy(buff2, src, 22);
   while (buff1[i] || buff2[i])
   {
	   if (strcmp(&buff1[i], &buff2[i]) != 0)
	   {
	   	red();
	   	printf("ft_memcpy not ok\n");
	   	reset();
		ok++;
	   }
	   i++;
   }
   
   i = 0;
   memcpy(buff3, src, 5);
	//printf("|%s|\n", memcpy(buff3, src, 5));
   ft_memcpy(buff4, src, 5);
   //printf("|%s|\n", ft_memcpy(buff4, src, 5));
   while (buff3[i] || buff4[i])
   {
	   if (strcmp(&buff3[i], &buff4[i]) != 0)
	   {
	   	red();
	   	printf("ft_memcpy not ok\n");
	   	reset();
		ok++;
	   }
	   i++;
   }

   i = 0;
  //memcpy(buff5, src, 22);
  //printf("|%s|\n", ft_memcpy(buff6, src, 22));
   ft_memcpy(buff6, src, 22);
  // printf("|%s|\n", src);
   while (src[i])
   {
	   if (src[i] != buff6[i])
	   {
	   	green();
	   	printf("ft_memcpy predictable buffer overflow\n");
	   	reset();
		ok++;
	   }
	   i++;
   }

   if (ok == 0)
   {
   	green();
   	printf("ft_memcpy ok\n");
   	reset();
   }
   

/*	char *tmp;
	size_t i = 0;
//	tmp = memcpy(NULL, NULL, 0);
//	tmp = ft_memcpy(NULL, NULL, 0);
//	tmp = memcpy(NULL, src, 0);
//	tmp = ft_memcpy(NULL, src, 0);
//	tmp = memcpy(src, NULL, 0); //does not segfault
//	tmp = ft_memcpy(src, NULL, 0);
//	tmp = memcpy(src, src, 0); // does not segfault
//	tmp = ft_memcpy(src, src, 0);
//	tmp = memcpy(src, NULL, 12);
//	tmp = ft_memcpy(src, NULL, 12);
//	tmp = memcpy(NULL, NULL, 12);
//	tmp = ft_memcpy(NULL, NULL, 12);
//	tmp = memcpy(NULL, src, 12);
//	tmp = ft_memcpy(NULL, src, 12);
	while(tmp[i++])
		printf("%c\n", tmp[i]);*/
}
