/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:48:52 by mabarbas          #+#    #+#             */
/*   Updated: 2022/01/30 14:58:29 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (nb = nb * ft_recursive_factorial(nb - 1));
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
		r = ft_recursive_factorial(nb);
	}
	printf("%d\n", r);
}
*/