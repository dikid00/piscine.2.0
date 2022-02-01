/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:39:27 by mabarbas          #+#    #+#             */
/*   Updated: 2022/01/30 15:10:13 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((*s1) - (*s2));
}

int	main(int ac, char **av)
{
	int	i;
	int	x;
	int	y;
	int	sort[1024];

	i = 1;
	x = 1;
	while (i < ac)
	{
		sort[i] = i;
		i++;
	}
	while (x < ac)
	{
		y = x;
		while (y < ac)
		{
			if ((ft_strcmp(av[sort[x]], av[sort[y]])) > 0)
				ft_swap(&sort[x], &sort[y]);
			y++;
		}
		ft_putstr(av[sort[x]]);
		ft_putstr("\n");
		x++;
	}
}
