/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:51:58 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/07 18:32:08 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>
char *	ft_strchr(const char *str, int c)
{
	char ct;

	ct = (char)c;
	while (*str)
	{
		if (*str == ct)
			return (char *)str;
		str++;
	}
	return (0);
}
