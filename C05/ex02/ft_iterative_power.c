/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:23:42 by lmarck            #+#    #+#             */
/*   Updated: 2024/08/01 15:23:44 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power < 0)
		return (0);
	if (!power)
		return (1);
	while (power > 1)
	{
		n = n * nb;
		power--;
	}
	return (n);
}
/*int main ()
{
	int power = 5;
	int nb = 10;
	printf("%d\n", ft_iterative_power(nb, power));
	return(0);
}*/
