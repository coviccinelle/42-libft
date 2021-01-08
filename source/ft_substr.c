/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 10:12:03 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/07 16:05:17 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t i;

	i = start;
	if (!(str = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	if ((start + len)  > (unsigned long)ft_strlen(s))
		return (NULL);
	while (s[i] && i < (len + start))
	{
		str[i - start] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
