/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_strs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 23:20:03 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/08 09:29:19 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>

size_t	ft_strlen(const char *str);

int		ft_count_strs(const char *str, char c)
{
	unsigned int	i;
	unsigned int	count_strs;

	i = 0;
	count_strs = 0;
	while (str[i] && str[i] == c)
		i++;
	while (str[i])
	{
		if (str[i] == c)
		{
			count_strs++;
			while (str[i] && str[i] == c)
				i++;
			continue;
		}
		i++;
	}
	if (str[i - 1] != c)
		count_strs++;
	return (count_strs);
}
