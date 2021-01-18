/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:48:52 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/16 19:27:49 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>

size_t	ft_strlen(const char *str);

char	*ft_strrchr(const char *s, int c)
{
	char		*cur;

	cur = (char *)s + ft_strlen(s);
	while (*cur != c)
	{
		if (cur == s)
			return (0);
		cur--;
	}
	return (cur);
}
