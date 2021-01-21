/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 12:20:34 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/21 09:53:51 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>

static int		ft_count(char *s, char sep)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (s[0] != sep)
		count++;
	while (s[i])
	{
		if (s[i - 1] == sep && s[i] != sep)
			count++;
		i++;
	}
	return (count);
}

static	char	*ft_strdup_sep(char *s, char sep)
{
	int		i;
	char	*dest;

	i = 0;
	while (s[i] != sep)
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	if (!sep)
		return (s);
	i = 0;
	while (s[i] != sep)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static	char	**ft_fill(int j, char **new, char *s, char c)
{
	int		k;
	int		l;

	k = 0;
	l = 0;
	if (s[0] != c && k < j)
	{
		new[0] = ft_strdup_sep(&s[0], c);
		k++;
	}
	while (s[l] && k < j)
	{
		if (s[l - 1] == c && s[l] != c)
		{
			new[k] = ft_strdup_sep(&s[l], c);
			k++;
		}
		l++;
	}
	return (new);
}

static	char	**ft_split(char const *s, char c)
{
	char	**new;
	char	*str;
	int		i;
	int		j;

	str = (char *)s;
	i = 0;
	j = ft_count(str, c);
	if (str == 0)
		return (0);
	new = malloc(sizeof(char *) * j + 1);
	if (!new)
		return (NULL);
	new = ft_fill(j, new, str, c);
	new[j] = NULL;
	while (i <= j)
		i++;
	return (new);
}
