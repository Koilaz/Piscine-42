/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 21:05:43 by lmarck            #+#    #+#             */
/*   Updated: 2024/08/07 21:05:47 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!str || str[0] == '\0')
		return (0);
	if (!to_find || to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		while (str[i] != to_find[0] && str[i])
			i ++;
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*int main ()
{
	char *str = "mais elle sont ou ?! mais elle sont ou les seg fault ?!";
	char *to_find = "seg";
	printf("botte de foin:%s\n", str);
	printf("aiguile:%s\n", to_find);
	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}*/