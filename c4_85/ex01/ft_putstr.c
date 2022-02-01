/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 13:04:54 by mabarbas          #+#    #+#             */
/*   Updated: 2022/01/29 11:56:52 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, &*str, 1);
		str++;
	}
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
// 		r = ft_putstr(av[1]);
// 	printf("%d\n", r);
// }
