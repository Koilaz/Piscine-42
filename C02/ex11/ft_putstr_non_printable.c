/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 12:25:34 by lmarck            #+#    #+#             */
/*   Updated: 2024/08/07 12:25:36 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_whex(unsigned char c)
{
	char	*bhex;
	char	ch[3];
	int		i;

	bhex = "0123456789abcdef";
	i = 0;
	ch[0] = 92;
	ch[1] = bhex[(c / 16)];
	ch[2] = bhex[(c % 16)];
	while (i <= 2)
		write(1, &ch[i++], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] <= 31 || (unsigned char)str[i] >= 127)
			ft_whex((unsigned char)str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*int main()
{
	char *test = "Coucou\ntu veux voir\n... si ca marche 0? ";
	ft_putstr_non_printable(test);
	return(0);
}*/