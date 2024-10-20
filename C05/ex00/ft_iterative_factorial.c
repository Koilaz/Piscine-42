/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:43:54 by lmarck            #+#    #+#             */
/*   Updated: 2024/08/01 13:43:56 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	n = nb - 1;
	while (n > 0)
	{
		nb = nb * n;
		n--;
	}
	return (nb);
}

/*int main ()
	{
		int nb = 4;
		printf("%d\n", ft_iterative_factorial(nb));
		return (0);
	}*/
