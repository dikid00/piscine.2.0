/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 03:33:49 by mabarbas          #+#    #+#             */
/*   Updated: 2022/01/19 03:40:32 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	sort;

	a = 0;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{
			if (*(tab + b) < *(tab + a))
			{
				sort = *(tab + a);
				*(tab + a) = *(tab + b);
				*(tab + b) = sort;
			}
			b++;
		}
		a++;
	}
}
