/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:09:53 by mabarbas          #+#    #+#             */
/*   Updated: 2022/01/19 03:46:35 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	ui;

	if (nb < 0)
	{
		ft_putchar(45);
		ui = (unsigned int)(nb * -1);
	}
	else
		ui = (unsigned int)(nb);
	if (ui >= 10)
	{
		ft_putnbr(ui / 10);
		ft_putnbr(ui % 10);
	}
	else
		ft_putchar(ui + 48);
}
