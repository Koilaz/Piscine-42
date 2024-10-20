/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 00:55:51 by lmarck            #+#    #+#             */
/*   Updated: 2024/08/01 00:55:54 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long int	ft_verif(long int b, char *base)
{
	int	i;
	int	j;

	i = 0;
	if (b < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1 ;
		while (base[j])
		{
			if (base[i] == base [j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_rec(long int nbl, long int b, char *base)
{
	int	u;

	u = 0;
	if (nbl)
	{
		u = (nbl % b);
		nbl = nbl / b;
		ft_rec (nbl, b, base);
		ft_putchar (base[u]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	b;
	long int	nbl;

	nbl = nbr;
	b = 0;
	while (base[b])
		b++;
	if (!nbl)
		ft_putchar(base[0]);
	if (nbl < 0 && ft_verif(b, base))
	{
		write(1, "-", 1);
		nbl = -nbl;
	}
	if (ft_verif(b, base))
		ft_rec(nbl, b, base);
}
/*int main()
	{
	int nbr = 0;
	char *base = "01";
	ft_putnbr_base(nbr, base);
	return(0);
}*/
