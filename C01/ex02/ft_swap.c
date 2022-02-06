/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 10:29:16 by ktang             #+#    #+#             */
/*   Updated: 2022/01/16 13:15:09 by ktang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	printf("before: %d, %d\n", a, b);
	ft_swap(&a, &b);
	printf("after: %d, %d\n", a, b);
}*/