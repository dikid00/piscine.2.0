/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 22:35:23 by mabarbas          #+#    #+#             */
/*   Updated: 2022/01/29 12:10:50 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *base)
{
	int	len;

	len = 0;
	while (base[len])
		len++;
	return (len);
}

int	check_base(char *base)
{
	int	i;
	int	x;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] < 32 || base[i] == 127)
			return (0);
		x = 0;
		while (base[x] != '\0')
		{
			if (base[x] == base [x + 1])
				return (0);
			x++;
		}
		if (base[i + 1] == '\0')
			break ;
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(base);
	if (check_base(base) == 1)
	{
		if (nbr < 0)
		{
			nbr *= -1;
			ft_putchar('-');
		}
		if (nbr < len)
			ft_putchar(base[nbr]);
		if (nbr >= len)
		{
			ft_putnbr_base(nbr / len, base);
			ft_putnbr_base(nbr % len, base);
		}
	}
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
// 	if (ac == 3)
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
// 		ft_putnbr_base(nb * neg, av[2]);
// 	}
// }
