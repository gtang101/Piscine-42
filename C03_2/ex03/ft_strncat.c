/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:25:24 by ktang             #+#    #+#             */
/*   Updated: 2022/01/25 21:26:32 by ktang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[b] != '\0')
		b++;
	while (src[a] != '\0' && nb > 0)
	{
		dest[b] = src[a];
		a++;
		b++;
		nb--;
	}
	dest[b] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char			src[100] = "Hello World";
	char			dest[100] = "Yo! ";
	unsigned int	n = 4;

	ft_strncat(dest, src, n);
	printf("%s\n", dest);
}*/
