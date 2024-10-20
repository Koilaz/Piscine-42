/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:44:19 by lmarck            #+#    #+#             */
/*   Updated: 2024/08/08 13:44:21 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ls;
	unsigned int	ld;
	unsigned int	j;

	ls = len(src);
	ld = len(dest);
	j = 0;
	if (ls >= size)
		return (size + ls);
	while (src[j] && ld + j < size -1)
	{
		dest[ld + j] = src[j];
		j++;
	}
	dest[ld + j] = '\0';
	return (ld + ls);
}
int main ()
{
	unsigned int size = 60;
	char dest[100] = "comment est votre blanquette ?";
	char *src = " La blanquette est bonne.";
	ft_strlcat(dest, src, size);
	printf("%s\n", dest );
	return(0);
}