/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:35:42 by mabarbas          #+#    #+#             */
/*   Updated: 2022/02/03 15:20:35 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dst = (char *)malloc(sizeof(char) * (i + 1));
	dst[i] = '\0';
	while (--i >= 0)
		dst[i] = src[i];
	return (dst);
}
/*
int	main(void)
{
	char	*str;

	str = ft_strdup("qwerty");
	printf("%s\n", str);
	return (0);
}
*/