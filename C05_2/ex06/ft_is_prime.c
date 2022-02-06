/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:51:41 by ktang             #+#    #+#             */
/*   Updated: 2022/01/31 21:35:56 by ktang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (((nb % i) != 0) && (i < (nb / 2)))
		i++;
	if ((nb % i) != 0)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_is_prime(10));
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(1321));
	printf("%d\n", ft_is_prime(917151311));
}*/
