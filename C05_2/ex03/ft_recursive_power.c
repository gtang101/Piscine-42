/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:09:22 by ktang             #+#    #+#             */
/*   Updated: 2022/01/31 18:38:56 by ktang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, (power - 1)));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Result: %d\n", ft_recursive_power(2, 3));
}*/
