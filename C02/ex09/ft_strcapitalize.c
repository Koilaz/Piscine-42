/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 20:27:29 by lmarck            #+#    #+#             */
/*   Updated: 2024/07/29 20:27:33 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z'
			&& !(str[i - 1] >= 'a' && str[i - 1] <= 'z')
			&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			&& !(str[i - 1] >= '0' && str[i - 1] <= '9'))
		{
			str[i] = str[i] - 32;
		}
		if (str[i] >= 'A' && str[i] <= 'Z'
			&& ((str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*int main()
{
char str [] = "on peut tromPer 1000Fois UnE perSonnE mais ...on peut PAS...";
printf("%s", ft_strcapitalize(str));
return(0);
}*/
