/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:36:10 by mabarbas          #+#    #+#             */
/*   Updated: 2022/02/03 15:20:48 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*r;
	int	x;

	x = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	*range = (int *)malloc(sizeof(int) * i);
	if (!*range)
		return (-1);
	r = *range;
	while (min < max)
	{
		r[x] = min;
		x++;
		min++;
	}
	return (i);
}
/*
int	main(void)
{
	int	r;
	int	**range;

	r = ft_ultimate_range(range, 10, 15);
	if (r)
		printf("%d ", r);
	else
		printf("NULL");
	return (0);
}
*/