/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:25:32 by lmarck            #+#    #+#             */
/*   Updated: 2024/08/01 18:26:46 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	n;

	if (nb < 2)
		return (2);
	n = 2;
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (ft_find_next_prime(nb +1));
		n++;
	}
	return (nb);
}
/*int main ()
{
	int nb = 102;
	printf("%d\n", ft_find_next_prime(nb));
	return(0);
}*/
