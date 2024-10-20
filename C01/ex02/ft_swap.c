/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 21:37:33 by lmarck            #+#    #+#             */
/*   Updated: 2024/07/25 21:39:10 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main()
{	
	int a = 2;
	int b = 4;

	printf("avant:a=%db=%d\n",a ,b);
	ft_swap(&a, &b);
	printf("apres:a=%db=%d\n",a ,b);
}*/
