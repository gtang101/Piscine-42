/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:53:29 by ktang             #+#    #+#             */
/*   Updated: 2022/01/24 19:57:52 by ktang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
			i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Hell ";
	char	str2[] = "HellP";

	printf("ft_strcmp: %d\n", ft_strcmp(str1, str2));
	printf("strcmp: %d\n", strcmp(str1, str2));
}*/
