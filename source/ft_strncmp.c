/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 16:56:19 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/17 20:49:29 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>


int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;
	size_t	len2;
	int		result;

	len = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (len <= len2)
		len = len + 1;
	len = len2 + 1;
	if (len > n)
		len = n;
//	len = (len <= len2) ? len + 1 : len2 + 1;
//	len = (len <= n) ? len : n;
	result = ft_memcmp(s1, s2, len);
	return (result);
}

/*
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long	i;
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (!n || str1 == str2)
		return (0);
	while (i < n)
	{
		if (str1[i] == str2[i])
			i++;
		return (str1[i] - str2[i]);
	}
	return (0);
}
*/
