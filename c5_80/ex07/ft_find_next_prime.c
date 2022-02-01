/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 11:41:46 by mabarbas          #+#    #+#             */
/*   Updated: 2022/01/31 00:49:48 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (nb % i != 0 && i < ((nb / i) + (nb % i)))
		i++;
	if (nb % i == 0 && nb != 2)
		return (0);
	else
		return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
		nb++;
	return (ft_find_next_prime(nb));
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
		r = ft_find_next_prime(nb);
	}
	printf("%d\n", r);
}
*/