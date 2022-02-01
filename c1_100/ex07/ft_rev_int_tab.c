/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:20:24 by mabarbas          #+#    #+#             */
/*   Updated: 2022/01/19 03:39:48 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	nint;
	int	rev;

	nint = 0;
	while (nint < size)
	{
		rev = tab[nint];
		tab[nint] = tab[size - 1];
		tab[size - 1] = rev;
		nint++;
		size--;
	}
}
