/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:52:30 by ktang             #+#    #+#             */
/*   Updated: 2022/01/31 21:14:23 by ktang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			result = result * nb;
			power--;
		}
		return (result);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Result: %d\n", ft_iterative_power(2, 5));
}*/
