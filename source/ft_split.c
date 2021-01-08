/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 12:20:34 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/07 23:22:24 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>
int	ft_strlen(const char *str);
static unsigned int	ft_count_strs(const char *str, char c)
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

static	unsigned char	*ft_position_c(unsigned char *str, char c)
{
	unsigned char	i;
	unsigned int	position;
	unsigned char	*str_pos;

	i = 0;
	position = 0;
	if (!(str_pos = (char *)malloc(sizeof(char) * ft_count_strs(str) + 2)))
		return (NULL);
	while (str[i] && i < (ft_count_strs(str) + 2))
	{
		while (str[i] == c)
			position++;

	}

}

char	**ft_split(char const *s, char c)
{
	malloc
}

