/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:35:56 by mabarbas          #+#    #+#             */
/*   Updated: 2022/02/03 19:20:53 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*r;
	int	*s;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	r = (int *)malloc(sizeof(int) * (max - min));
	if (!r)
		return (NULL);
	s = r;
	while (min < max)
		*(s++) = min++;
	return (r);
}
/*
int	main(void)
{
	int	*r;

	r = ft_range(10, 15);
	if (r != NULL)
		while (*r)
			printf("%d ", *(r++));
	else
		printf("NULL");
	return (0);
}
*/
