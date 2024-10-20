/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 22:08:12 by lmarck            #+#    #+#             */
/*   Updated: 2024/08/05 22:08:14 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	j = min;
	i = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof (int));
	if (!*range)
		return (0);
	while (j != max)
	{
		(*range)[i] = j;
		j++;
		i++;
	}
	return (max - min);
}
/*int main()
{
	int min = 43;
	int max = 42;
	int i = 0;
	int *range;

	ft_ultimate_range(&range, min, max);
	
	while (i < max - min)
	{
		printf("%d\n",range[i]);
		i++;
	}
	free(range);
	return (0);
}*/
