/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:34:25 by lmarck            #+#    #+#             */
/*   Updated: 2024/07/21 17:02:52 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

char	g_a;
char	g_b;
char	g_c;

void	ft_print_char(char d)
{
	write (1, &d, 1);
}

void	ft_print(char g_a, char g_b, char g_c)
{
	ft_print_char(g_a);
	ft_print_char(g_b);
	ft_print_char(g_c);
	if (!(g_a == '7' && g_b == '8' && g_c == '9'))
	{
		ft_print_char(',');
		ft_print_char(' ');
	}
}

void	ft_print_comb(void)
{
	g_a = '0';
	g_b = '0';
	g_c = '0';
	while (g_a <= '9')
	{
		if (g_a < g_b && g_b < g_c)
			ft_print(g_a, g_b, g_c);
		while (g_b <= '9')
		{
			if (g_a < g_b && g_b < g_c)
				ft_print(g_a, g_b, g_c);
			while (g_c <= '9')
			{
				if (g_a < g_b && g_b < g_c)
					ft_print(g_a, g_b, g_c);
				g_c++;
			}
			g_b++;
			g_c = '0';
		}
		g_a++;
		g_b = '0';
	}
}

/*int	main(void){
	ft_print_comb();
 	return (0);
}*/
