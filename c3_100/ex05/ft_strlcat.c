/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:00:57 by mabarbas          #+#    #+#             */
/*   Updated: 2022/01/26 23:18:55 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	len;

	i = 0;
	x = 0;
	len = 0;
	while (dest[i] != '\0')
		i++;
	while (src[x] != '\0')
		x++;
	if (size <= i)
		len = x + size;
	else
		len = x + i;
	x = 0;
	while (src[x] != '\0' && (i + 1) < size)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (len);
}
/*
int	main(void)
{
	int		r;
	int		i;
	char	s1[30] = "nao dei";
	char	s2[10] = "naoisto";

	i = 7;
	r = ft_strlcat(s1, s2, i);
	printf("%d", r);
	return (0);
}
*/