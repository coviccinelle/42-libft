/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 12:20:34 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/12 21:37:21 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>

size_t					ft_strlen(const char *str);

static unsigned int		ft_count_strs(const char *str, char c)
{
	unsigned int	i;
	unsigned int	count_strs;

	i = 0;
	count_strs = 0;
	while (str[i] && str[i] == c)
		i++;
	while (str[i])
	{
		if (str[i] == c)
		{
			count_strs++;
			while (str[i] && str[i] == c)
				i++;
			continue;
		}
		i++;
	}
	if (str[i - 1] != c)
		count_strs++;
	return (count_strs);
}

static char				**ft_malloc_failed(char **tab, int j)
{
	while (j > 0)
	{
		free((void *)tab[j]);
		j--;
	}
	free(tab);
	return (NULL);
}

static char				*fill_strs(const char *s, char c)
{
	unsigned int	i;
	char			*each_str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (!(each_str = malloc(sizeof(char) * i + 1)))
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
	{
		each_str[i] = s[i];
		i++;
	}
	each_str[i] = '\0';
	return (each_str);
}

static	char			**fill_tab(char **tab, char c, int count_strs)
{
	int		i;
	int		k;
	char	*s;

	s = (NULL);
	i = 0;
	k = 0;
	count_strs = ft_count_strs(s, c);
	while (s[i] == c)
		i++;
	while (s[i] && k < count_strs)
	{
		while (s[i] != c && i < k)
		{
			tab[k] = fill_strs(s, c);
			k++;
		}
		i++;
	}
	tab[k] = 0;
	return (tab);
}

char					**ft_split(char const *s, char c)
{
	char			**tab;
	unsigned int	count_strs;

	tab = (NULL);
	if (!s)
		return (0);
	count_strs = ft_count_strs(s, c);
	if (!(**tab = (char)malloc(sizeof(char *) * count_strs + 1)))
		return (ft_malloc_failed(tab, count_strs));
	return (fill_tab(tab, c, count_strs));
}
