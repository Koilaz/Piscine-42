/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:41:00 by lmarck            #+#    #+#             */
/*   Updated: 2024/07/25 20:43:54 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	i2;
	int	tmp;

	tmp = 0;
	i = size -1;
	i2 = 0;
	while (i > i2)
	{
		tmp = tab[i];
		tab[i] = tab[i2];
		tab[i2] = tmp;
		i--;
		i2++;
	}
}
/*
int	main()
{
	int tab[6] = {1, 2, 3, 4, 5, 6};
	int size = 6;
	printf("avant:%d%d%d%d%d%d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	ft_rev_int_tab(tab, size);
	printf("apres:%d%d%d%d%d%d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);


	return 0;
}*/
