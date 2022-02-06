/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:07:51 by ktang             #+#    #+#             */
/*   Updated: 2022/01/31 22:52:38 by ktang            ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	while ((ft_is_prime(nb) != 1) && nb < 2147483647)
	{
		nb++;
	}
	return (nb);
}
/*
#include <stdio.h>

int main(void)
{
	printf("Next prime is %d\n", ft_find_next_prime(10));
	printf("Next prime is %d\n", ft_find_next_prime(97));
	printf("Next prime is %d\n", ft_find_next_prime(1328));
	printf("Next prime is %d\n", ft_find_next_prime(917153143));
}*/
