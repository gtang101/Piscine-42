/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 11:00:59 by ktang             #+#    #+#             */
/*   Updated: 2022/01/16 13:10:38 by ktang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 19;
	b = 4;
	ft_ultimate_div_mod(&a, &b);
	printf("Result: %d, Left: %d", a, b);
}*/
