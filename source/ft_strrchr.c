/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:48:52 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/18 13:55:30 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>

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
