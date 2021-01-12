/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 18:13:52 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/12 15:59:08 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>

size_t		ft_strlen(char const *str);

char		*ft_substr(char const *str, unsigned int start, size_t len);

static int	ft_check_left(char const *s, char const *set)
{
	int	k;

	k = 0;
	while (s[k] && set[k] && s[k] == set[k])
	{
		k++;
	}
	if (!set[k])
		return (1);
	return (0);
}

static int	ft_check_right(char const *s, char const *set)
{
	int		k;
	int		k2;

	k = ft_strlen(s) - 1;
	k2 = ft_strlen(set) - 1;
	while (s[k] && set[k2] && (s[k] == set[k2]))
	{
		k--;
		k2--;
	}
	if (!set[k2])
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int left;
	int right;
	int size_s1;
	int size_set;

	left = ft_check_left(s1, set);
	right = ft_check_right(s1, set);
	size_s1 = ft_strlen(s1);
	size_set = ft_strlen(set);
	if (left == 1 && right == 1)
		return (ft_substr(s1, size_set, size_s1 - size_set * 2));
	else if (right == 1)
		return (ft_substr(s1, 0, size_s1 - size_set));
	else if (left == 1)
		return (ft_substr(s1, size_set, size_s1 - size_set));
	else
		return ((char*)s1);
}
