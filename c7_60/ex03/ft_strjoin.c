/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:36:38 by mabarbas          #+#    #+#             */
/*   Updated: 2022/02/03 17:17:34 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dst, char *src)
{
	while (*src)
		*(dst++) = *(src++);
	return (dst);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*r;
	char	*cat;
	int		len;
	int		i;

	if (!size)
	{
		r = ((char *)malloc(1));
		r[0] = 0;
		return (r);
	}
	len = 0;
	i = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	r = (char *)malloc(len + (size - 1) * ft_strlen(sep) + 1);
	cat = ft_strcat(r, strs[0]);
	i = 1;
	while (i < size)
	{
		cat = ft_strcat(cat, sep);
		cat = ft_strcat(cat, strs[i++]);
	}
	*cat = 0;
	return (r);
}
/*
int	main(int ac, char **av)
{
	char	*sep = NULL;

	sep = ", ";
	printf("%s\n", ft_strjoin(ac, av, sep));
	return (0);
}
*/
