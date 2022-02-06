/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:24:29 by ktang             #+#    #+#             */
/*   Updated: 2022/01/26 17:49:43 by ktang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Result: %d\n", ft_iterative_factorial(5));
	printf("Result: %d\n", ft_iterative_factorial(0));
	printf("Result: %d\n", ft_iterative_factorial(1));
	printf("Result: %d\n", ft_iterative_factorial(-1));
}*/
