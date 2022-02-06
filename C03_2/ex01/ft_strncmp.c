/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:58:24 by ktang             #+#    #+#             */
/*   Updated: 2022/01/25 23:18:34 by ktang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (n > 0 && (s2[i] != '\0' || s1[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			n--;
			i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			str1[] = "Hello";
	char			str2[] = "Hello There";
	unsigned int	i = 8;	

	printf("i =  %d\n", i);
	printf("strncmp: %d\n", strncmp(str1, str2, i));
	printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, i));
	printf("strncmp: %d\n", strncmp(str2, str1, i));
	printf("ft_strncmp: %d\n", ft_strncmp(str2, str1, i));
}*/
