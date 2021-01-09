/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 16:56:19 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/07 18:34:27 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long	i;

	i = 0;
	while ((s1[i] && s2[i]) && i <= n)
	{
		if (s1[i] == s2[i])
			i++;
		return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
