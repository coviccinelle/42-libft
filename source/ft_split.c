/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 12:20:34 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/19 13:04:22 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>

/*
int	ft_count(char *s, char sep)
{
	int	i;
	int	count;

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

char	*ft_strdup_sep(char *s, char sep)
{
	int	i;
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

char	**ft_fill(int j, char **new, char *s, char c)
{
	int	k;
	int	l;

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

char	**ft_split(char const *s, char c)
{
	char	**new;
	char	*str;
	int	i;
	int	j;

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
*/

/*
static int		ft_cnt_parts(const char *s, char c)
{
	int		cnt;
	int		in_substring;

	in_substring = 0;
	cnt = 0;
	while (*s)
	{
		if (in_substring == 1 && *s == c)
			in_substring = 0;
		if (in_substring == 0 && *s != c)
		{
			in_substring = 1;
			cnt++;
		}
		s++;
	}
	return (cnt);
}

static int		ft_wlen(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s)
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_split(char const *s, char c)
{
	char	**t;
	int		nb_word;
	int		index;

	index = 0;
	nb_word = ft_cnt_parts((const char *)s, c);
	t = (char **)malloc(sizeof(*t) * (ft_cnt_parts((const char *)s, c) + 1));
	if (t == NULL)
		return (NULL);
	while (nb_word--)
	{
		while (*s == c && *s)
			s++;
		t[index] = ft_substr((const char *)s, 0, ft_wlen((const char *)s, c));
		if (t[index] == NULL)
			return (NULL);
		s = s + ft_wlen(s, c);
		index++;
	}
	t[index] = NULL;
	return (t);
}


*/


static unsigned int		ft_count_strs(const char *str, char c)
{
	unsigned int	i;
	unsigned int	count_strs;

	i = 0;
	count_strs = 0;
	if (!c)
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

