/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:36:34 by lmarck            #+#    #+#             */
/*   Updated: 2024/08/01 16:36:36 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (!power)
		return (1);
	nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
/*int main ()
{
	int power = 3;
	int nb = 3;
	printf("%d\n", ft_recursive_power(nb, power));
	return(0);
}*/
