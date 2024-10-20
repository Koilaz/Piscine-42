/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 21:44:27 by lmarck            #+#    #+#             */
/*   Updated: 2024/08/06 21:44:29 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_strs_len(char **strs, int size, char *sep, int *tab)
{
	int	i;
	int	j;
	int	k;
	int	l;

	l = 0;
	k = 0;
	i = 0;
	j = 0;
	while (j < size)
	{
		while (strs[j][i++])
			l++;
		i = 0;
		j++;
	}
	while (sep[k])
		k++;
	tab[0] = l;
	tab[1] = k;
	return (tab);
}

char	*ft_concat(char *str, char **strs, int size, char *sep)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		while (strs[i][j])
			str[k++] = strs[i][j++];
		j = 0;
		if (i < size - 1)
			while (sep[j])
				str[k++] = sep[j++];
		j = 0;
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_malloc(int *tab, int size)
{
	char	*str;
	int		l;

	l = tab[0] + (tab[1] * (size - 1)) + 1;
	if (!size)
	{
		str = NULL;
		return (str);
	}
	str = malloc(l * sizeof (char));
	if (str == NULL)
		return (NULL);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		tab[2];
	char	*str;

	if (size < 1)
	{
		str = malloc(1);
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	ft_strs_len(strs, size, sep, tab);
	str = ft_malloc(tab, size);
	if (!str)
		return (NULL);
	str = ft_concat(str, strs, size, sep);
	return (str);
}
/*int main()
{
	char *strs[] = {"", "le bruit blanc de l'eau.",
	 "me battre.", "me beurrer la biscotte."};
	int size = 4;
	char *sep = " J'aime ";
	printf("%s\n", ft_strjoin(size, strs, sep));
	free(ft_strjoin(size, strs, sep));
	return (0);
}*/