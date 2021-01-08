/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 11:00:34 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/07 18:29:24 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <../includes/libft.h>
void *	ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t		i;
	
	i = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (!n)
		return(NULL);
	while (i < n)
	{
		dest[i] = source[i];
		if(dest[i] == (unsigned char)c || source[i] == (unsigned char) c)
			return (unsigned char *)&dst[i];
		i++;
	}
	return (NULL);
}
