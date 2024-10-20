/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:19:49 by lmarck            #+#    #+#             */
/*   Updated: 2024/07/30 14:19:51 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/**int main ()
{
char s1[50] = "Le lion ne s'associe pas";
char *s2 = " avec le cafard";
printf("ft_strcat:%s\n",ft_strcat(s1,s2));
printf("strcat:%s\n",strcat(s1,s2));
return(0);
}*/
