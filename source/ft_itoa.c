/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 16:22:29 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/19 13:09:22 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>

static int		sizelen(int n)
{
	unsigned int	size;

	size = 1;
	if (n == 0)
		return (size);
	if (n == -2147483648)
		size = 12;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n >= 10)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static char		*ft_check(int n, char *str)
{
	char	*src;
	int		i;

	i = 0;
	src = "-2147483648";
	if (n == -2147483648)
	{
		if (!(str = malloc(sizeof(char) * 12)))
			return (NULL);
		while (src[i])
		{
			str[i] = src[i];
			i++;
		}
		return (str);
	}
	else if (n == 0)
	{
		str[i] = '0';
		return (str);
	}
	return (0);
}

static char		*conver(char *s, int n, unsigned int i)
{
	s[i] = '\0';
	if (n < 0)
	{
		n = -n;
		s[0] = '-';
	}
	while (n >= 10)
	{
		i--;
		s[i] = (n % 10) + '0';
		n = n / 10;
	}
	i--;
	if (n >= 1 && n < 10)
		s[i--] = n + '0';
	return (s);
}

char			*ft_itoa(int n)
{
	unsigned int	size;
	char			*str;
	unsigned int	i;

	i = 0;
	size = (unsigned int)sizelen(n);
	if (!(str = malloc(sizeof(char) * size + 1)))
		return (NULL);
	if (n == -2147483648 || n == 0)
		return (ft_check(n, str));
	str = conver(str, n, size);
	return (str);
}
