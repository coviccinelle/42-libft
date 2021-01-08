/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 17:00:40 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/07 18:24:17 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <../includes/libft.h>
int	ft_atoi(const char *str)
{
	int i;
	int res;
	int neg;
	
	i = 0;
	res = 0;
	neg = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return(res * neg);
}
