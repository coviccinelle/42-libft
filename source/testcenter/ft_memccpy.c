/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 11:00:34 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/14 12:37:46 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t		i;

	i = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (!n)
		return (NULL);
	while (i <= n)
	{
		dest[i] = source[i];
		if (dest[i] == (unsigned char)c || source[i] == (unsigned char)c)
			return (unsigned char *)&dst[i];
		i++;
	}
	return (NULL);
}
int	main()
{
	char src[] = "test basic du memccpy !";
	char buff1[22];

	__builtin___memset_chk (buff1, 0, sizeof(buff1), __builtin_object_size (buff1, 0));
	char *r1 = __builtin___memccpy_chk (buff1, src, 'm', 22, __builtin_object_size (buff1, 0));
	char *r2 = ft_memccpy(buff1, src, 'm', 22);
	if (r1 != r2)
		exit(TEST_FAILED);
	r1 = __builtin___memccpy_chk ("", src, 'm', 0, __builtin_object_size ("", 0));
	r2 = ft_memccpy("", src, 'm', 0);
	if (r1 != r2)
		exit(TEST_FAILED);
	exit(TEST_SUCCESS);
}

