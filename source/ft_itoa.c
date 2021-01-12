/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 16:22:29 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/12 17:04:46 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>

static int		sizelen(unsigned int nb)
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

static char		*conver(char *s, int n, unsigned int i)
{
	unsigned int	nb;

	if (n < 0)
	{
		i = 0;
		nb = (unsigned int)(n * -1);
		s[i] = '-';
	}
	nb = (unsigned int)n;
	while (n >= 10)
	{
		s[i--] = (char)(nb % 10 + 48);
		nb = nb / 10;
	}
	s[i] = '\0';
	return (s);
}

char			*ft_itoa(int n)
{
	unsigned int	size;
	char			*str;
	unsigned int	nb;
	unsigned int	i;

	i = 0;
	str = (NULL);
	nb = (unsigned int)n;
	size = (unsigned int)sizelen(nb);
	if ((n < 0) && (str[i] = '-'))
		size = size + 1;
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	if (n < 0 && (str[i] = '-'))
		size++;
	i = size - 1;
	return (conver(str, n, i));
}
