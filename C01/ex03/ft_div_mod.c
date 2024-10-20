/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:16:27 by lmarck            #+#    #+#             */
/*   Updated: 2024/07/24 15:18:04 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main ()
{
	int a = 13;
	int b = 6;
	int div = 0;
	int mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf ("%d %d\n",div,mod);
	return 0;
}*/
