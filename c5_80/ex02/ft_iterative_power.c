/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:58:41 by mabarbas          #+#    #+#             */
/*   Updated: 2022/01/30 14:58:18 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	r;

	i = power - 1;
	r = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (i > 0)
	{
		r *= nb;
		i--;
	}
	return (r);
}
/*
int	main(int ac, char **av)
{
	int	i;
	int	r;
	int	nb;
	int	power;

	i = 0;
	r = 0;
	nb = 0;
	power = 0;
	if (ac > 2)
	{
		while (av[1][i] != '\0')
		{
			nb = (nb * 10) + (int)av[1][i] - '0';
			i++;
		}
		i = 0;
		while (av[2][i] != '\0')
		{
			power = (power * 10) + (int)av[2][i] - '0';
			i++;
		}
		r = ft_iterative_power(nb, power);
	}
	printf("%d\n", r);
}
*/