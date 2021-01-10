/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 12:20:34 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/07 23:22:24 by thi-phng         ###   ########.fr       */
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

static	char	**ft_malloc_failed(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static	char	**ft_fill_tab(char **tab, int i)
{
	unsigned int	i;
	unsigned int	count_strs;

	i = 0;
	if(!(**tab = (char *)malloc(sizeof(char*) * (count_strs + 1))))
		return (NULL);
}
char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count_strs;
	char			**tab;

	i = 0;
	count_strs = ft_count_strs(s, c);
	if (!(**tab = (char *)malloc(sizeof(char *) * (count_strs + 1))))
		return (ft_malloc_failed(**tab));
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && tab[count_strs])
	{
		if (s[i] == c)
		{
			tab[count_strs] = s[i];
			count_strs--;
			while (s[i] == c)
		}
		i++;
	}

}

