/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:15:21 by alienard          #+#    #+#             */
/*   Updated: 2021/01/11 13:42:48 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/mainlibft.h"

void	ft_strlcpy_main(void)
{
	const char src0[] = "978654321";
	const char src1[] = "978654321978654321";
	const char src2[] = "";
	const char src3[] = "c";
	const char src4[] = "sfhbfdf\0vdjbsd";
	char dst[]="123456789";
	char dst1[]="123456789";
	char dst2[]="1";
	char dst3[]="1";
	char dst0[]="123456789";
	char dst01[]="123456789";
	char dst02[]="1";
	char dst03[]="1";
	char dst4[]="";
	char dst5[]="";
	size_t dstsize0 = 0;
	size_t dstsize1 = 1;
	size_t dstsize2; //= ft_strlen(dst);
	size_t dstsize3; //= ft_strlen(dst) - 1;
	size_t dstsize4; //= ft_strlen(dst) + 1;
	
	size_t ret;
	size_t ret1;
	size_t i;
	size_t ok = 0;

// dst 0 et 1, dstsize 0 //

	i = 0;
	ret = strlcpy(dst, src0, dstsize0);
	ret1 = ft_strlcpy(dst1, src0, dstsize0);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 0-0-0 not ok\n");
		reset();
		ok++;
	}
	while (dst[i] || dst1[i])
	{
		if (dst[i] != dst1[i])
		{
			red();
			printf("ft_strlcpy test 0-0-0 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst, src1, dstsize0);
	ret1 = ft_strlcpy(dst1, src1, dstsize0);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 0-1-0 not ok\n");
		reset();
		ok++;
	}
	while (dst[i] || dst1[i])
	{
		if (dst[i] != dst1[i])
		{
			red();
			printf("ft_strlcpy test 0-1-0 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst, src2, dstsize0);
	ret1 = ft_strlcpy(dst1, src2, dstsize0);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 0-2-0 not ok\n");
		reset();
		ok++;
	}
	while (dst[i] || dst1[i])
	{
		if (dst[i] != dst1[i])
		{
			red();
			printf("ft_strlcpy test 0-2-0 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst, src3, dstsize0);
	ret1 = ft_strlcpy(dst1, src3, dstsize0);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 0-3-0 not ok\n");
		reset();
		ok++;
	}
	while (dst[i] || dst1[i])
	{
		if (dst[i] != dst1[i])
		{
			red();
			printf("ft_strlcpy test 0-3-0 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst, src4, dstsize0);
	ret1 = ft_strlcpy(dst1, src4, dstsize0);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 0-4-0 not ok\n");
		reset();
		ok++;
	}
	while (dst[i] || dst1[i])
	{
		if (dst[i] != dst1[i])
		{
			red();
			printf("ft_strlcpy test 0-4-0 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

//dst 2 et 3, dstsize 0//

	i = 0;
	ret = strlcpy(dst2, src0, dstsize0);
	ret1 = ft_strlcpy(dst3, src0, dstsize0);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-0-0 not ok\n");
		reset();
		ok++;
	}
	while (dst2[i] || dst3[i])
	{
		if (dst2[i] != dst3[i])
		{
			red();
			printf("ft_strlcpy test 1-0-0 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst2, src1, dstsize0);
	ret1 = ft_strlcpy(dst3, src1, dstsize0);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-1-0 not ok\n");
		reset();
		ok++;
	}
	while (dst2[i] || dst3[i])
	{
		if (dst2[i] != dst3[i])
		{
			red();
			printf("ft_strlcpy test 1-1-0 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst2, src2, dstsize0);
	ret1 = ft_strlcpy(dst3, src2, dstsize0);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-2-0 not ok\n");
		reset();
		ok++;
	}
	while (dst2[i] || dst3[i])
	{
		if (dst2[i] != dst3[i])
		{
			red();
			printf("ft_strlcpy test 1-2-0 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst2, src3, dstsize0);
	ret1 = ft_strlcpy(dst3, src3, dstsize0);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-3-0 not ok\n");
		reset();
		ok++;
	}
	while (dst2[i] || dst3[i])
	{
		if (dst2[i] != dst3[i])
		{
			red();
			printf("ft_strlcpy test 1-3-0 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst2, src4, dstsize0);
	ret1 = ft_strlcpy(dst3, src4, dstsize0);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-4-0 not ok\n");
		reset();
		ok++;
	}
	while (dst2[i] || dst3[i])
	{
		if (dst2[i] != dst3[i])
		{
			red();
			printf("ft_strlcpy test 1-4-0 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

//dst 4 et 5, dstsize 0//

	i = 0;
	ret = strlcpy(dst4, src0, dstsize0);
	ret1 = ft_strlcpy(dst5, src0, dstsize0);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 2-0-0 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 2-0-0 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst4, src1, dstsize0);
	ret1 = ft_strlcpy(dst4, src1, dstsize0);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 2-1-0 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 2-1-0 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst4, src2, dstsize0);
	ret1 = ft_strlcpy(dst5, src2, dstsize0);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 2-2-0 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 2-2-0 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst4, src3, dstsize0);
	ret1 = ft_strlcpy(dst5, src3, dstsize0);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 2-3-0 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 2-3-0 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst4, src4, dstsize0);
	ret1 = ft_strlcpy(dst5, src4, dstsize0);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 2-4-0 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 2-4-0 not ok\n");
			reset();
			ok++;
		}
		i++;
	}


// dst 0 et 1, dstsize 1 //

	i = 0;
	ret = strlcpy(dst, src0, dstsize1);
	ret1 = ft_strlcpy(dst1, src0, dstsize1);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 0-0-1 not ok\n");
		reset();
		ok++;
	}
	while (dst[i] || dst1[i])
	{
		if (dst[i] != dst1[i])
		{
			red();
			printf("ft_strlcpy test 0-0-1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst, src1, dstsize1);
	ret1 = ft_strlcpy(dst1, src1, dstsize1);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 0-1-1 not ok\n");
		reset();
		ok++;
	}
	while (dst[i] || dst1[i])
	{
		if (dst[i] != dst1[i])
		{
			red();
			printf("ft_strlcpy test 0-1-1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst, src2, dstsize1);
	ret1 = ft_strlcpy(dst1, src2, dstsize1);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 0-2-1 not ok\n");
		reset();
		ok++;
	}
	while (dst[i] || dst1[i])
	{
		if (dst[i] != dst1[i])
		{
			red();
			printf("ft_strlcpy test 0-2-1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst, src3, dstsize1);
	ret1 = ft_strlcpy(dst1, src3, dstsize1);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 0-3-1 not ok\n");
		reset();
		ok++;
	}
	while (dst[i] || dst1[i])
	{
		if (dst[i] != dst1[i])
		{
			red();
			printf("ft_strlcpy test 0-3-1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst, src4, dstsize1);
	ret1 = ft_strlcpy(dst1, src4, dstsize1);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 0-4-1 not ok\n");
		reset();
		ok++;
	}
	while (dst[i] || dst1[i])
	{
		if (dst[i] != dst1[i])
		{
			red();
			printf("ft_strlcpy test 0-4-1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

//dst 2 et 3, dstsize 1//

	i = 0;
	ret = strlcpy(dst2, src0, dstsize1);
	ret1 = ft_strlcpy(dst3, src0, dstsize1);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-0-1 not ok\n");
		reset();
		ok++;
	}
	while (dst2[i] || dst3[i])
	{
		if (dst2[i] != dst3[i])
		{
			red();
			printf("ft_strlcpy test 1-0-1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst2, src1, dstsize1);
	ret1 = ft_strlcpy(dst3, src1, dstsize1);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-1-1 not ok\n");
		reset();
		ok++;
	}
	while (dst2[i] || dst3[i])
	{
		if (dst2[i] != dst3[i])
		{
			red();
			printf("ft_strlcpy test 1-1-1not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst2, src2, dstsize1);
	ret1 = ft_strlcpy(dst3, src2, dstsize1);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-2-1 not ok\n");
		reset();
		ok++;
	}
	while (dst2[i] || dst3[i])
	{
		if (dst2[i] != dst3[i])
		{
			red();
			printf("ft_strlcpy test 1-2-1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst2, src3, dstsize1);
	ret1 = ft_strlcpy(dst3, src3, dstsize1);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-3-1 not ok\n");
		reset();
		ok++;
	}
	while (dst2[i] || dst3[i])
	{
		if (dst2[i] != dst3[i])
		{
			red();
			printf("ft_strlcpy test 1-3-1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst2, src4, dstsize1);
	ret1 = ft_strlcpy(dst3, src4, dstsize1);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-4-1 not ok\n");
		reset();
		ok++;
	}
	while (dst2[i] || dst3[i])
	{
		if (dst2[i] != dst3[i])
		{
			red();
			printf("ft_strlcpy test 1-4-1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

//dst 4 et 5, dstsize 1//

	i = 0;
	ret = strlcpy(dst4, src0, dstsize1);
	ret1 = ft_strlcpy(dst5, src0, dstsize1);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 2-0-1 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 2-0-1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst4, src1, dstsize1);
	ret1 = ft_strlcpy(dst5, src1, dstsize1);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 2-1-1 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 2-1-1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst4, src2, dstsize1);
	ret1 = ft_strlcpy(dst5, src2, dstsize1);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 2-2-1 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 2-2-1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst4, src3, dstsize1);
	ret1 = ft_strlcpy(dst5, src3, dstsize1);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 2-3-1 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 2-3-1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst4, src4, dstsize1);
	ret1 = ft_strlcpy(dst5, src4, dstsize1);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 2-4-1 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 2-4-1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}


// dst 0 et 1, dstsize 2 //
	
	dstsize2 = ft_strlen(dst);
	i = 0;
	ret = strlcpy(dst, src0, dstsize2);
	ret1 = ft_strlcpy(dst1, src0, dstsize2);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 0-0-2 not ok\n");
		reset();
		ok++;
	}
	while (dst[i] || dst1[i])
	{
		if (dst[i] != dst1[i])
		{
			red();
			printf("ft_strlcpy test 0-0-2 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst, src1, dstsize2);
	ret1 = ft_strlcpy(dst1, src1, dstsize2);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 0-1-2 not ok\n");
		reset();
		ok++;
	}
	while (dst[i] || dst1[i])
	{
		if (dst[i] != dst1[i])
		{
			red();
			printf("ft_strlcpy test 0-1-2 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst, src2, dstsize2);
	ret1 = ft_strlcpy(dst1, src2, dstsize2);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 0-2-2 not ok\n");
		reset();
		ok++;
	}
	while (dst[i] || dst1[i])
	{
		if (dst[i] != dst1[i])
		{
			red();
			printf("ft_strlcpy test 0-2-2 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst, src3, dstsize2);
	ret1 = ft_strlcpy(dst1, src3, dstsize2);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 0-3-2 not ok\n");
		reset();
		ok++;
	}
	while (dst[i] || dst1[i])
	{
		if (dst[i] != dst1[i])
		{
			red();
			printf("ft_strlcpy test 0-3-2 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst, src4, dstsize2);
	ret1 = ft_strlcpy(dst1, src4, dstsize2);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 0-4-2 not ok\n");
		reset();
		ok++;
	}
	while (dst[i] || dst1[i])
	{
		if (dst[i] != dst1[i])
		{
			red();
			printf("ft_strlcpy test 0-4-2 not ok\n");
			reset();
			ok++;
		}
		i++;
	}


//dst 2 et 3, dstsize 2 //

	dstsize2 = ft_strlen(dst2);
	i = 0;
	ret = strlcpy(dst2, src0, dstsize2);
	ret1 = ft_strlcpy(dst3, src0, dstsize2);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-0-2 not ok\n");
		reset();
		ok++;
	}
	while (dst2[i] || dst3[i])
	{
		if (dst2[i] != dst3[i])
		{
			red();
			printf("ft_strlcpy test 1-0-2 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst2, src1, dstsize2);
	ret1 = ft_strlcpy(dst3, src1, dstsize2);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-2 not ok\n");
		reset();
		ok++;
	}
	while (dst2[i] || dst3[i])
	{
		if (dst2[i] != dst3[i])
		{
			red();
			printf("ft_strlcpy test 1-2 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst2, src2, dstsize2);
	ret1 = ft_strlcpy(dst3, src2, dstsize2);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-3 not ok\n");
		reset();
		ok++;
	}
	while (dst2[i] || dst3[i])
	{
		if (dst2[i] != dst3[i])
		{
			red();
			printf("ft_strlcpy test 1-3 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst2, src3, dstsize2);
	ret1 = ft_strlcpy(dst3, src3, dstsize2);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-4 not ok\n");
		reset();
		ok++;
	}
	while (dst2[i] || dst3[i])
	{
		if (dst2[i] != dst3[i])
		{
			red();
			printf("ft_strlcpy test 1-4 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst2, src4, dstsize2);
	ret1 = ft_strlcpy(dst3, src4, dstsize2);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-5 not ok\n");
		reset();
		ok++;
	}
	while (dst2[i] || dst3[i])
	{
		if (dst2[i] != dst3[i])
		{
			red();
			printf("ft_strlcpy test 1-5 not ok\n");
			reset();
			ok++;
		}
		i++;
	}
	

//dst 4 et 5, dstsize 2 //

	dstsize2 = ft_strlen(dst4);
	i = 0;
	ret = strlcpy(dst4, src0, dstsize2);
	ret1 = ft_strlcpy(dst5, src0, dstsize2);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-1 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 1-1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst4, src1, dstsize2);
	ret1 = ft_strlcpy(dst5, src1, dstsize2);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-2 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 1-2 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst4, src2, dstsize2);
	ret1 = ft_strlcpy(dst5, src2, dstsize2);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-3 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 1-3 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst4, src3, dstsize2);
	ret1 = ft_strlcpy(dst5, src3, dstsize2);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-4 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 1-4 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst4, src4, dstsize2);
	ret1 = ft_strlcpy(dst5, src4, dstsize2);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-5 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 1-5 not ok\n");
			reset();
			ok++;
		}
		i++;
	}


// dst 0 et 1, dstsize 3 //

	dstsize3 = ft_strlen(dst0) - 1;
	i = 0;
	ret = strlcpy(dst0, src0, dstsize3);
	ret1 = ft_strlcpy(dst01, src0, dstsize3);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-1 not ok\n");
		reset();
		ok++;
	}
	while (dst0[i] || dst01[i])
	{
		if (dst0[i] != dst01[i])
		{
			red();
			printf("ft_strlcpy test 1-1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst0, src1, dstsize3);
	ret1 = ft_strlcpy(dst01, src1, dstsize3);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-2 not ok\n");
		reset();
		ok++;
	}
	while (dst0[i] || dst01[i])
	{
		if (dst0[i] != dst01[i])
		{
			red();
			printf("ft_strlcpy test 1-2 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst0, src2, dstsize3);
	ret1 = ft_strlcpy(dst01, src2, dstsize3);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-3 not ok\n");
		reset();
		ok++;
	}
	while (dst0[i] || dst01[i])
	{
		if (dst0[i] != dst01[i])
		{
			red();
			printf("ft_strlcpy test 1-3 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst0, src3, dstsize3);
	ret1 = ft_strlcpy(dst01, src3, dstsize3);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-4 not ok\n");
		reset();
		ok++;
	}
	while (dst0[i] || dst01[i])
	{
		if (dst0[i] != dst01[i])
		{
			red();
			printf("ft_strlcpy test 1-4 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst0, src4, dstsize3);
	ret1 = ft_strlcpy(dst01, src4, dstsize3);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-5 not ok\n");
		reset();
		ok++;
	}
	while (dst0[i] || dst01[i])
	{
		if (dst0[i] != dst01[i])
		{
			red();
			printf("ft_strlcpy test 1-5 not ok\n");
			reset();
			ok++;
		}
		i++;
	}


//dst 2 et 3, dstsize 3 //

	dstsize3 = ft_strlen(dst02) - 1;
	i = 0;
	ret = strlcpy(dst02, src0, dstsize3);
	ret1 = ft_strlcpy(dst03, src0, dstsize3);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-1 not ok\n");
		reset();
		ok++;
	}
	while (dst02[i] || dst03[i])
	{
		if (dst02[i] != dst03[i])
		{
			red();
			printf("ft_strlcpy test 1-1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst02, src1, dstsize3);
	ret1 = ft_strlcpy(dst03, src1, dstsize3);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-2 not ok\n");
		reset();
		ok++;
	}
	while (dst02[i] || dst03[i])
	{
		if (dst02[i] != dst03[i])
		{
			red();
			printf("ft_strlcpy test 1-2 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst02, src2, dstsize3);
	ret1 = ft_strlcpy(dst03, src2, dstsize3);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-3 not ok\n");
		reset();
		ok++;
	}
	while (dst02[i] || dst03[i])
	{
		if (dst02[i] != dst03[i])
		{
			red();
			printf("ft_strlcpy test 1-3 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst02, src3, dstsize3);
	ret1 = ft_strlcpy(dst03, src3, dstsize3);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-4 not ok\n");
		reset();
		ok++;
	}
	while (dst02[i] || dst03[i])
	{
		if (dst02[i] != dst03[i])
		{
			red();
			printf("ft_strlcpy test 1-4 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst02, src4, dstsize3);
	ret1 = ft_strlcpy(dst03, src4, dstsize3);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-5 not ok\n");
		reset();
		ok++;
	}
	while (dst02[i] || dst03[i])
	{
		if (dst02[i] != dst03[i])
		{
			red();
			printf("ft_strlcpy test 1-5 not ok\n");
			reset();
			ok++;
		}
		i++;
	}


/*	
//dst 4 et 5, dstsize 3 //

	dstsize3 = ft_strlen(dst4) - 1;
	i = 0;
	ret = strlcpy(dst4, src0, dstsize3);
	ret1 = ft_strlcpy(dst5, src0, dstsize3);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-1 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 1-1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst4, src1, dstsize3);
	ret1 = ft_strlcpy(dst5, src1, dstsize3);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-2 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 1-2 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst4, src2, dstsize3);
	ret1 = ft_strlcpy(dst5, src2, dstsize3);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-3 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 1-3 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst4, src3, dstsize3);
	ret1 = ft_strlcpy(dst5, src3, dstsize3);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-4 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 1-4 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst4, src4, dstsize3);
	ret1 = ft_strlcpy(dst5, src4, dstsize3);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-5 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 1-5 not ok\n");
			reset();
			ok++;
		}
		i++;
	}
*/

// dst 0 et 1, dstsize 4 //

	dstsize4 = ft_strlen(dst) + 1;
	i = 0;
	ret = strlcpy(dst, src0, dstsize4);
	ret1 = ft_strlcpy(dst1, src0, dstsize4);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-1 not ok\n");
		reset();
		ok++;
	}
	while (dst[i] || dst1[i])
	{
		if (dst[i] != dst1[i])
		{
			red();
			printf("ft_strlcpy test 1-1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst, src1, dstsize4);
	ret1 = ft_strlcpy(dst1, src1, dstsize4);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-2 not ok\n");
		reset();
		ok++;
	}
	while (dst[i] || dst1[i])
	{
		if (dst[i] != dst1[i])
		{
			red();
			printf("ft_strlcpy test 1-2 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst, src2, dstsize4);
	ret1 = ft_strlcpy(dst1, src2, dstsize4);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-3 not ok\n");
		reset();
		ok++;
	}
	while (dst[i] || dst1[i])
	{
		if (dst[i] != dst1[i])
		{
			red();
			printf("ft_strlcpy test 1-3 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst, src3, dstsize4);
	ret1 = ft_strlcpy(dst1, src3, dstsize4);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-4 not ok\n");
		reset();
		ok++;
	}
	while (dst[i] || dst1[i])
	{
		if (dst[i] != dst1[i])
		{
			red();
			printf("ft_strlcpy test 1-4 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst, src4, dstsize4);
	ret1 = ft_strlcpy(dst1, src4, dstsize4);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-5 not ok\n");
		reset();
		ok++;
	}
	while (dst[i] || dst1[i])
	{
		if (dst[i] != dst1[i])
		{
			red();
			printf("ft_strlcpy test 1-5 not ok\n");
			reset();
			ok++;
		}
		i++;
	}


//dst 2 et 3, dstsize 4 //

	dstsize4 = ft_strlen(dst2) + 1;
	i = 0;
	ret = strlcpy(dst2, src0, dstsize4);
	ret1 = ft_strlcpy(dst3, src0, dstsize4);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-1 not ok\n");
		reset();
		ok++;
	}
	while (dst2[i] || dst3[i])
	{
		if (dst2[i] != dst3[i])
		{
			red();
			printf("ft_strlcpy test 1-1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst2, src1, dstsize4);
	ret1 = ft_strlcpy(dst3, src1, dstsize4);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-2 not ok\n");
		reset();
		ok++;
	}
	while (dst2[i] || dst3[i])
	{
		if (dst2[i] != dst3[i])
		{
			red();
			printf("ft_strlcpy test 1-2 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst2, src2, dstsize4);
	ret1 = ft_strlcpy(dst3, src2, dstsize4);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-3 not ok\n");
		reset();
		ok++;
	}
	while (dst2[i] || dst3[i])
	{
		if (dst2[i] != dst3[i])
		{
			red();
			printf("ft_strlcpy test 1-3 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst2, src3, dstsize4);
	ret1 = ft_strlcpy(dst3, src3, dstsize4);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-4 not ok\n");
		reset();
		ok++;
	}
	while (dst2[i] || dst3[i])
	{
		if (dst2[i] != dst3[i])
		{
			red();
			printf("ft_strlcpy test 1-4 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst2, src4, dstsize4);
	ret1 = ft_strlcpy(dst3, src4, dstsize4);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-5 not ok\n");
		reset();
		ok++;
	}
	while (dst2[i] || dst3[i])
	{
		if (dst2[i] != dst3[i])
		{
			red();
			printf("ft_strlcpy test 1-5 not ok\n");
			reset();
			ok++;
		}
		i++;
	}


//dst 4 et 5, dstsize 4 //

	dstsize4 = ft_strlen(dst4) + 1;
	i = 0;
	ret = strlcpy(dst4, src0, dstsize4);
	ret1 = ft_strlcpy(dst5, src0, dstsize4);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-1 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 1-1 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst4, src1, dstsize4);
	ret1 = ft_strlcpy(dst5, src1, dstsize4);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-2 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 1-2 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst4, src2, dstsize4);
	ret1 = ft_strlcpy(dst5, src2, dstsize4);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-3 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 1-3 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst4, src3, dstsize4);
	ret1 = ft_strlcpy(dst5, src3, dstsize4);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-4 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 1-4 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

	i = 0;
	ret = strlcpy(dst4, src4, dstsize4);
	ret1 = ft_strlcpy(dst5, src4, dstsize4);
	if (ret != ret1)
	{
		red();
		printf("ft_strlcpy return value test 1-5 not ok\n");
		reset();
		ok++;
	}
	while (dst4[i] || dst5[i])
	{
		if (dst4[i] != dst5[i])
		{
			red();
			printf("ft_strlcpy test 1-5 not ok\n");
			reset();
			ok++;
		}
		i++;
	}

//validation finale//

	if (ok == 0)
	{
		green();
		printf("ft_strlcpy ok\n");
		reset();
	}


}
