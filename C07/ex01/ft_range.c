/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 00:09:40 by ktang             #+#    #+#             */
/*   Updated: 2022/02/01 17:13:13 by ktang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	range = (int *)malloc(sizeof (int) * (max - min));
	if (min >= max)
		return (0);
	if (range == NULL)
		return (0);
	while (i < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	size;
	int	min;
	int	max;

	i = 0;
	min = 5;
	max = 10;
	size = max - min;
	while (i < size)
	{
		printf("%d, ", (ft_range(min, max))[i]);
		i++;
	}
}*/
