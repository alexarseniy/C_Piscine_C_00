/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 07:29:56 by olarseni          #+#    #+#             */
/*   Updated: 2024/05/29 20:40:42 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int a, int flag)
{
	char	ac;

	if (flag == 0)
		ft_putnbr(a / 10, 1);
	a = a % 10;
	ac = a + '0';
	write(1, &ac, 1);
}

void	ft_print(int a, int b)
{
	ft_putnbr(a, 0);
	write(1, " ", 1);
	ft_putnbr(b, 0);
	if (a != 98 || b != 99)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (++a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a != b)
				ft_print(a, b);
			b++;
		}
	}
}
