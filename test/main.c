/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 16:29:31 by thi-phng          #+#    #+#             */
/*   Updated: 2021/01/16 19:02:44 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/libft.h>

void	test_ft_bzero()
{
}

void	test_ft_memmove()
{
	char *source = "Coucou vi blablabla";
	char *dest;

	dest = source + 5;
	printf("%s\n", dest);
	
	//printf("%s", ft_memmove(source, dest, 5));
	printf("%s", memmove(dest, source, 5));
}

int	test_atoi()
{
	char *str = "         -+   ";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return 0;
}

int	test_strchr()
{
	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	char *d1 = strchr(src, '\0');
	char *d2 = ft_strchr(src, '\0');
	printf("%s\n", d1);
	printf("%s\n", d2);
	return (0);
}

int	test_strrchr()
{
	char *s = "hello hello coucou";
	int c = 'o';
	printf("%s\n", ft_strrchr(s, c));
	printf("%s\n", strrchr(s, c));
	return (0);
}

int main()
{
	//test_ft_bzero();
	//test_ft_memccpy();
//	test_ft_memmove();
//	test_atoi();
//	test_strchr();
	test_strrchr();
	return 0;
}
