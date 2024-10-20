/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:39:20 by lmarck            #+#    #+#             */
/*   Updated: 2024/07/24 16:41:28 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}
/*
int	main()
{
	int x = 13;
	int y = 6;
	int *px = &x;
	int *py = &y;

	ft_ultimate_div_mod(px,py);
	printf("%d,%d\n",x,y);
	return 0;
}*/
