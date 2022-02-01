/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:32:23 by mabarbas          #+#    #+#             */
/*   Updated: 2022/01/30 14:57:34 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long long int	r;

	r = 1;
	if (nb < 1)
		return (0);
	while ((r * r) < nb)
		r++;
	if ((r * r) == nb)
		return (r);
	return (0);
}
/*
int	main(int ac, char **av)
{
	int	i;
	int	r;
	int	nb;

	i = 0;
	r = 0;
	nb = 0;
	if (ac > 1)
	{
		while (av[1][i] != '\0')
		{
			nb = (nb * 10) + (int)av[1][i] - '0';
			i++;
		}
		r = ft_sqrt(nb);
	}
	printf("%d\n", r);
}
*/