/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:22:15 by lmarck            #+#    #+#             */
/*   Updated: 2024/07/25 16:23:22 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putpositif(int long nbl, int i, char tab[])
{
	while (nbl != 0 && i >= 0)
	{
		tab[i] = (nbl % 10) + '0';
		nbl = nbl / 10;
		i--;
	}
	i++;
	while (i <= 9)
	{
		ft_putchar(tab[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char		tab[10];
	int			i;
	long int	nbl;

	nbl = nb;
	i = 9;
	if (nbl < 0)
	{
		ft_putchar('-');
		nbl = -nbl;
	}
	if (nbl == 0)
	{
		ft_putchar('0');
	}
	ft_putpositif(nbl, i, tab);
}

/*int main()
{
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(-0);
	printf("\n");
	ft_putnbr(14260021);
	printf("\n");
	ft_putnbr(-8000);
	printf("\n");
	ft_putnbr(1234567);
	printf("\n");
	ft_putnbr(-2147483648);
	return (0);
}
*/