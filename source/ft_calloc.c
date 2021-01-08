/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 09:28:13 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/07 18:24:44 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <../includes/libft.h>
void	ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *str1;

	str1 = (unsigned char *)s;
	i = 0;
	while(str1[i] && i < n)
	{
		str1[i] = 0;
		i++;
	}
}
void	* ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = malloc(count*sizeof(size));
	if (!str)
		return (str);
	ft_bzero(str, size * count);
	return (str);
}
