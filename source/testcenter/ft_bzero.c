/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 17:36:24 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/14 12:38:22 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char	*ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*str;

	str = (char *)s;
	i = 0;
	while (str[i] && i < n)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

int	main()
{
	unsigned char *smth = malloc(5);
	smth[0]=98;
	smth[1]=98;
	smth[2]=98;
	smth[3]=98;
	smth[5]=98;
	
	size_t len = 10;
	void	*s;
	s = &smth[2];
	printf("%s\n", ft_bzero(s, len));
	printf("%s\n", smth);
	printf("%s\n", bzero(s, len));
	return 0;
}
