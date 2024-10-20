/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 21:30:36 by lmarck            #+#    #+#             */
/*   Updated: 2024/07/26 21:33:11 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	i1;

	tmp = 0;
	i = 0;
	while (i < size -1)
	{
		i1 = i +1;
		while (i1 < size)
		{
			if (tab[i] > tab[i1])
			{
				tmp = tab[i];
				tab[i] = tab [i1];
				tab [i1] = tmp;
			}
			if (i1 < size)
				i1++;
		}
		i++;
	}	
}
/*int main()
{
	int tab[6] = {1, 8, 3, 2, 2, 4,};
	int size = 6;
	printf("avant:%d%d%d%d%d%d\n",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5]);
	ft_sort_int_tab(tab, size);
	printf("apres:%d%d%d%d%d%d\n",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5]);
	return (0);
}*/
