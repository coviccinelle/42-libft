/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 23:20:03 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/08 09:29:19 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>

size_t	ft_strlen(const char *str);
int	ft_test(const char *str, char c)
{
	unsigned int	i;
	unsigned int	str_count;

	i = 0;
	str_count = 0;
	while(str[i] && str[i] == c)
	{
		str_count++;
	}
	return (str_count);
}
