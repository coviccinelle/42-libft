/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 09:28:13 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/18 09:45:27 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if (!(str = malloc(size * count)))
		return (str);
	ft_bzero(str, (size * count));
	return (str);
}
