/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:31:36 by lmarck            #+#    #+#             */
/*   Updated: 2024/07/31 12:31:39 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main ()
{
char s1[50] = "Le lion ne s'associe pas";
char *s2 = " avec le cafard";
char s3[50] = "Le lion ne s'associe pas";
char *s4 = " avec le cafard";

printf("ft_strncat:%s\n",ft_strncat(s1, s2, 4));
printf("strncat:%s\n",strncat(s3, s4, 4));
return(0);
}*/
