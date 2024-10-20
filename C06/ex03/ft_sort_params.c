/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:39:26 by lmarck            #+#    #+#             */
/*   Updated: 2024/08/05 15:39:48 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_print_para(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	while (j < argc)
	{
		while (argv[j][i])
		{
			write (1, &argv[j][i], 1);
			i++;
		}
		write (1, "\n", 1);
		j++;
		i = 0;
	}
}

void	ft_sort_arg(int argc, char **argv)
{
	char	*temp;
	int		j;
	int		k;

	j = 1;
	k = 2;
	while (j < argc - 1)
	{	
		while (k < argc)
		{
			if (ft_strcmp(argv[j], argv[k]) > 0)
			{
				temp = argv[j];
				argv[j] = argv [k];
				argv [k] = temp;
			}
			k++;
		}
		j++;
		k = j + 1;
	}
}

int	main(int argc, char **argv)
{
	ft_sort_arg(argc, argv);
	ft_print_para(argc, argv);
	return (0);
}
