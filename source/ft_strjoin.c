/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 17:47:37 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/07 18:32:47 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>

int		ft_strlen(const char *str);

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	char	*str;

	i = 0;
	k = 0;
	if (!(str = (char *)malloc(sizeof(char) *
					(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[i] && s2[k])
	{
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		while (s2[k])
		{
			str[i + k] = s2[k];
			k++;
		}
	}
	str[i + k] = '\0';
	return (str);
}
