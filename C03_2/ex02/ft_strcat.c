/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:41:38 by ktang             #+#    #+#             */
/*   Updated: 2022/01/25 23:22:07 by ktang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[b] != '\0')
		b++;
	while (src[a] != '\0')
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	dest[b] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[50] = "Yo! ";
	char	src[50] = "Hello World";

	ft_strcat(dest, src);
	printf("ft_strcat: %s", dest);
}*/
