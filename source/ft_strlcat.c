/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:23:44 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/07 18:33:07 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>
size_t	ft_strlen(const char * restrict str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dst[i])
		i++;
	while (src[j] && i + j < dstsize - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (j < dstsize)
		dst[i + j] = '\0';
	if (dstsize < i)
		return (ft_strlen(src) + dstsize);
	return (ft_strlen(src) + i);
}
