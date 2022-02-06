/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:23:53 by ktang             #+#    #+#             */
/*   Updated: 2022/01/20 19:19:08 by ktang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned int	n = 4;
	char	src[] = "Hello World!";
	char	dest[n];

	printf("Original: %s\n", src);
	strncpy(dest, src, n);
	printf("Copy: %s\n", dest);
	ft_strncpy(dest, src, n);
	printf("ft_Copy: %s\n", dest);
}*/
