/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 16:29:31 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/10 23:05:08 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>
#include <stdio.h>

int main()
{
	const char *str = "  Hello coucou  bebe b";
	int c = ' ';
	printf(" Hello coucou   bebe b -> %s\n", ft_split(str, c));
	printf("coucou -> %zu", ft_strlen("coucou"));
	return 0;
}
