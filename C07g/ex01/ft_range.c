/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 20:02:11 by lmarck            #+#    #+#             */
/*   Updated: 2024/08/05 20:02:14 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (max <= min)
		return (0);
	i = 0;
	tab = malloc((max - min) * sizeof (int));
	if (!tab)
		return (0);
	while (min != max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*int main()
{
	int min = -42;
	int max = 42;
	int i = 0;
	int *range = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d\n",range[i]);
		i++;
	}
	return (0);
}*/
