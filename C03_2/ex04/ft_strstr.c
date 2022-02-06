/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 00:41:38 by ktang             #+#    #+#             */
/*   Updated: 2022/01/25 21:24:31 by ktang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		b = 0;
		while (str[a + b] == to_find[b] && str[a + b] != '\0')
		{
			if (to_find[b + 1] == '\0')
				return (&str[a]);
			b++;
		}
		a++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "sdafhellosdf";
	char	to_find[] = "hello";

	printf("strstr: %p\n", strstr(str, to_find));
	printf("ft_strstr: %p\n", ft_strstr(str, to_find));
}*/
