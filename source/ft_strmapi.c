/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 08:39:26 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/11 08:39:28 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	unsigned char *newstr;

	i = 0;
	while (s[i])
	{
		s[i] = (*f)(unsigned int, char);
		i++;
	}
	return (newstr);
}
