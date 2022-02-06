/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 12:53:31 by ktang             #+#    #+#             */
/*   Updated: 2022/01/15 12:58:04 by ktang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CORNER_A 'A'
#define CORNER_C 'C'

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
			else if ((x_c == 1 && y_c == 1) || (x_c == x && y_c == 1))
				ft_putchar(CORNER_A);
			else if ((x_c == x && y_c == y) || (x_c == 1 && y_c == y))
				ft_putchar(CORNER_C);
			else
				ft_putchar('B');
			x_c++;
		}
		ft_putchar('\n');
		y_c++;
	}
}
