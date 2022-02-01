/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:53:36 by mabarbas          #+#    #+#             */
/*   Updated: 2022/01/23 15:11:49 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	while (dest[i] != '\0')
		i++;
	x = 0;
	while (src[x] != '\0')
	{
		dest[i + x] = src[x];
		x++;
	}
	dest[i + x] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*r;
	char	s1[30] = "nao dei";
	char	s2[10] = "naoisto";

	r = ft_strcat(s1, s2);
	printf("%s", r);
	return (0);
}
*/