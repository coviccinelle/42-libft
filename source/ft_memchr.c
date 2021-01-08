/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 12:12:34 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/07 18:29:46 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char a;
	size_t i;
	unsigned char *str;

	str = (unsigned char *)s;
	a = (unsigned char)c;
	i = 0;
	while (str[i] && i <= n)
	{
		if(str[i] == a)
			return(&str[i]);
		i++;
	}
	return(NULL);

}
