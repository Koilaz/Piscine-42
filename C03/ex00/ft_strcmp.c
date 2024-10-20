/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:54:24 by lmarck            #+#    #+#             */
/*   Updated: 2024/07/30 13:54:26 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2 [i]);
}
/*int main ()
{
char *s1 = "jusqu'ici tout vas bien" ;
char *s2 = "jusqu'ici tout allait bien" ;
char *s3 = "jusqu'ici tout vas bien" ;
char *s4 = "jusqu'ici tout allait bien" ;
printf("strcmp:%d\n",strcmp(s1,s2));
printf("ft_strcmp:%d\n",ft_strcmp(s3,s4));
return(0);
}*/
