/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 06:05:36 by olarseni          #+#    #+#             */
/*   Updated: 2024/05/27 07:28:46 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num(char *str)
{
	if (*str != *(str + 1) && *(str + 1) != *(str + 2))
	{
		write(1, str, 3);
		if (*(str + 2) < '9' || *(str + 1) < '8' || *str < '7')
			write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	num[3];

	num[0] = '0';
	num[1] = '1';
	num[2] = '2';
	while (num[0] <= '7')
	{
		while (num[1] <= '8')
		{
			while (num[2] <= '9')
			{
				ft_print_num(num);
				num[2]++;
			}
			num[2] = num[1]++ + 1;
		}
		num[1] = num[0]++ + 1;
	}
}

/*	PRUEBAS	*/
//int	main(void)
//{
//	ft_print_comb();
//}
