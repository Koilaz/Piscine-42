/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:45:36 by lmarck            #+#    #+#             */
/*   Updated: 2024/08/05 18:45:38 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		l;
	char	*dest;
	int		i;

	i = 0;
	l = 0;
	while (src[l])
		l++;
	l++;
	dest = malloc(l * sizeof(char));
	if (!dest)
		return (0);
	while (i < l)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/*int	main()
{
	char *src = "habile bill !";
	printf("%s\n",ft_strdup(src));
	return(0);
}*/
