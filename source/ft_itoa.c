/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 16:22:29 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/18 13:53:26 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>

/*
static	char	*ft_reverse(char *str)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = ft_strlen(str);
	while (j > i)
	{
		temp = str[i];
		j--;
		str[i] = str[j];
		i++;
		str[j] = temp;
	}
//	str[j] = '\0';
	return (str);
}

static char	*ft_check(int n, char *str)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		str = "-2147483648";
		return (str);
	}
	else if (n == 0)
	{
		str[i] = '0';
		return (str);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;

	i = 0;
	sign = 0;
	if (!(str = malloc(sizeof(char) * 12)))
			return (NULL);
	if (n == -2147483648 || n == 0)
		return (ft_check(n, str));
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	while (n != 0)
	{
		str[i] = (n % 10) + '0';
		i++;
		n = n / 10;
	}
	if (sign == 1)
		str[i] = '-';
	return (ft_reverse(str));
}
*/

/*
static void		lengths(int n, size_t *len, int *weight)
{
	*len = 1;
	if (n >= 0)
	{
		*len = 0;
		n = -n;
	}
	*weight = 1;
	while (n / *weight < -9)
	{
		*weight *= 10;
		*len += 1;
	}
}

char			*ft_itoa(int n)
{
	size_t		len;
	int			weight;
	size_t		cur;
	char		*str;

	lengths(n, &len, &weight);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	cur = 0;
	if (n < 0)
	{
		str[cur] = '-';
		cur++;
	}
	if (n > 0)
		n = -n;
	while (weight >= 1)
	{
		str[cur++] = -(n / weight % 10) + 48;
		weight /= 10;
	}
	str[cur] = '\0';
	return (str);
}
*/


static int		sizelen(unsigned int nb)
{
	unsigned int	size;

	size = 1;
	if (nb == 0)
		size = 2;
	while (nb >= 10)
	{
		nb = nb / 10;
		size++;
	}
	return (size);
}

static char	*ft_check(int n, char *str)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		str = "-2147483648";
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
	unsigned int	nb;

	if (n < 0)
	{
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

/*
char			*ft_itoa(int n)
{
	unsigned int	size;
	char			*str;
	unsigned int	nb;

	nb = (unsigned int)n;
	size = (unsigned int)sizelen(nb);
	if (n < 0 && str[i] = '-')
		size++;
	if (!(str = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	str = conver(str, n, size - 1);
	return (str);
}
*/

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;

	i = 0;
	sign = 0;
	if (!(str = malloc(sizeof(char) * sizelen(n))))
			return (NULL);
	if (n == -2147483648 || n == 0)
		return (ft_check(n, str));
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	while (n != 0)
	{
		str[i] = (n % 10) + '0';
		i++;
		n = n / 10;
	}
	if (sign == 1)
		str[i] = '-';
	return (conver(str, n, sizelen(n) - 1));
}
