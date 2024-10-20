/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 20:09:51 by lmarck            #+#    #+#             */
/*   Updated: 2024/07/22 20:09:59 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_char(char *c)
{
	write(1, c, 2);
}

void	print_2_number(int nombre1, int nombre2)
{
	char	xx_nn[2];
	char	nn_xx[2];

	xx_nn [0] = '0' + nombre1 / 10;
	xx_nn [1] = '0' + nombre1 % 10;
	nn_xx [0] = '0' + nombre2 / 10;
	nn_xx [1] = '0' + nombre2 % 10;
	ft_print_char(nn_xx);
	write(1, " ", 1);
	ft_print_char(xx_nn);
	if (! (nombre1 == 99 && nombre2 == 98))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	nombre1;
	int	nombre2;

	nombre1 = 1;
	nombre2 = 0;
	while (nombre2 <= 99)
	{
		while (nombre1 <= 99)
		{
			print_2_number(nombre1, nombre2);
			nombre1++;
		}
		nombre2++;
		nombre1 = nombre2 + 1;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/