/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 16:22:29 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/08 09:23:30 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>

static	int		sizelen(unsigned int nb)
{
	unsigned int	size;

	size = 0;
	while (nb >= 10)
	{
		nb = nb / 10;
		size++;
	}
	size = size + 1;
	return (size);
}

char *ft_itoa(int n)
{
	unsigned int	nb;
	unsigned int	i;
	unsigned int	size;
	char			*str;

	if (n < 0)
		nb = (unsigned int)(n * -1);
	nb = (unsigned int)n;
	size = (unsigned int)sizelen(nb);
	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * (size + 1) + n < 0 ? 1 : 0)))
		return (NULL);
	if (n < 0 && (str[i] = '-'))
		size++;
	i = size - 1;
	while(nb >= 10)
	{
		str[i--] = (char)(nb % 10 + 48);
		nb = nb / 10;
	}
	str[i] = '\0';
	return (str);
}
