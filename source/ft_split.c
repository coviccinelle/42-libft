/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 12:20:34 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/12 14:43:49 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>

int						ft_strlen(const char *str);

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

static	char	**ft_malloc_failed(char **tab, int j)
{
	while (j > 0)
	{
		free((void *)tab[i]);
		j--;
	}
	free(tab);
	return (NULL);
}


static	int		ft_count_chars(const char *s, char c, int i)
{
	unsigned int	count_chars;

	count_chars = 0;
	while (s[i] && s[i] != c)
	{
		count_chars++;
		i++;
	}
	return (count_chars);
}

static	char	**fill_tab(char const *s, char **tab, char c, int l)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (s[i] && j < l)
	{
		k = 0;
		while (s[i] == c)
			i++;
		if (!(tab[j] = (char *)malloc(sizeof(char) * ft_count_chars(s, c, i) + 1)))
			return (ft_malloc_failed((char const **)tab, j));
		while (s[i] && s[i] != c)
			tab[j][k++] = s[i++];
		tab[j][k] = '\0';
		j++;
	}
	tab[j] = 0;
	return (tab);
}


char	**ft_split(char const *s, char c)
{
	char			**tab;;
	unsigned int	count_strs;

	if (!s)
		return (0);
	count_strs = ft_count_strs(s, c);
	if (!(**tab = (char **)malloc(sizeof(char *) * (count_strs + 1))))
		return (ft_malloc_failed(**tab));
	return (fill_tab(s, tab, c, count_strs));
}
