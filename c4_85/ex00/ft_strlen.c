/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:53:22 by mabarbas          #+#    #+#             */
/*   Updated: 2022/01/29 11:56:51 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

// int	main(int ac, char **av)
// {
// 	int	i;
// 	int	r;
// 	int	nb;

// 	i = 0;
// 	r = 0;
// 	nb = 0;
// 	if (ac > 1)
// 		r = ft_strlen(av[1]);
// 	printf("%d\n", r);
// }
