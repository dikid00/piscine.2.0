/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:16:26 by mabarbas          #+#    #+#             */
/*   Updated: 2022/01/24 02:13:55 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	while (dest[i])
		i++;
	x = 0;
	while (src[x] != '\0' && x < nb)
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
	int		i;
	char	s1[30] = "nao dei";
	char	s2[10] = "naoisto";

	i = 7;
	r = ft_strncat(s1, s2, i);
	printf("%s", r);
	return (0);
}
*/