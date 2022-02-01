/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:39:49 by mabarbas          #+#    #+#             */
/*   Updated: 2022/01/18 23:41:19 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	next_nbr(char *str, int n)
{
	int	i;

	if (str[n - 1] < '9')
		str[n - 1] += 1;
	else
	{
		i = n - 1;
		while (i >= 0 && str[i] >= 10 - n + i + '0')
			i--;
		if (i < 0)
			*str = '\0';
		else
		{
			str[i] += 1;
			i++;
			while (i < n)
			{
				str[i] = str[i - 1] + 1;
				i++;
			}
		}
	}
}

void	ft_print_combn(int n)
{
	char	str[9];
	int		i;

	i = 0;
	while (i < n)
	{
		str[i] = i + '0';
		i++;
	}
	while (str[0] != '\0')
	{
		write(1, str, n);
		next_nbr(str, n);
		if (str[0] != '\0')
			write(1, ", ", 2);
	}
}
