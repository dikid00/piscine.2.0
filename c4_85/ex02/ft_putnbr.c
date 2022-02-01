/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 13:09:33 by mabarbas          #+#    #+#             */
/*   Updated: 2022/01/29 12:14:15 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = (unsigned int)(nb * -1);
	}
	else
		n = (unsigned int)(nb);
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

// int	main(int ac, char **av)
// {
// 	int	i;
// 	int	r;
// 	int	nb;
// 	int	neg;

// 	i = 0;
// 	r = 0;
// 	nb = 0;
// 	neg = 1;
// 	if (ac > 1)
// 	{
// 		while (av[1][i] != '\0')
// 		{
// 			if (av[1][i] == '-')
// 			{
// 				neg *= -1;
// 				i++;
// 			}
// 			nb = (nb * 10) + (int)av[1][i] - '0';
// 			i++;
// 		}
// 		ft_putnbr(nb * neg);
// 	}
// }
