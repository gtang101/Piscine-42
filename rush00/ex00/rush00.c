/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 11:49:57 by ktang             #+#    #+#             */
/*   Updated: 2022/01/15 11:56:07 by ktang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CORNER 'o'

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	x_c;
	int	y_c;

	if (x < 1 || y < 1)
		return ;
	y_c = 1;
	while (y_c <= y)
	{
		x_c = 1;
		while (x_c <= x)
		{
			if ((x_c > 1 && x_c < x) && (y_c > 1 && y_c < y))
				ft_putchar(' ');
			else if ((x_c > 1 && x_c < x) && (y_c == 1 || y_c == y))
				ft_putchar('-');
			else if ((y_c > 1 && y_c < y) && (x_c == 1 || x_c == x))
				ft_putchar('|');
			else
				ft_putchar(CORNER);
			x_c++;
		}
		ft_putchar('\n');
		y_c++;
	}
}
