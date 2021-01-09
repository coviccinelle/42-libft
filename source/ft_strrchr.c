/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:48:52 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/07 18:35:33 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>

size_t	ft_strlen(const char *str);

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	ct;

	i = ft_strlen(str);
	ct = (char)c;
	while (*str)
	{
		if (str[i] == ct)
			return (char *)&str[i];
		i--;
	}
	return (0);
}
