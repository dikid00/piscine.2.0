/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 20:57:05 by mabarbas          #+#    #+#             */
/*   Updated: 2022/01/19 14:45:17 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		l;
	int		r;

	l = 0 - 1;
	r = l + 1;
	while (++l <= 98)
	{
		while (++r <= 99)
		{
			ft_putchar(l / 10 + '0');
			ft_putchar(l % 10 + '0');
			ft_putchar(32);
			ft_putchar(r / 10 + '0');
			ft_putchar(r % 10 + '0');
			if (l != 98)
			{
				ft_putchar(44);
				ft_putchar(32);
			}
		}
		r = l + 1;
	}
}
