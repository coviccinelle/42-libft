/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 16:29:31 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/08 09:15:16 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>
#include <stdio.h>

int main(){

	const char *str = "Hello beautiful boy";
	int c = 'b';
	printf("Hello beautiful baby boy -> %d\n", ft_test(str, c));
	printf("coucou -> %zu", ft_strlen("coucou"));
	return 0;
}
