/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 13:09:33 by mabarbas          #+#    #+#             */
/*   Updated: 2022/01/29 11:08:23 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_nub(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int		i;
	int		r;
	int		neg;

	i = 0;
	r = 0;
	neg = 1;
	while (*str == ' ' || (*str > 8 && *str < 14))
		str++;
	while (*str == '-' || *str == '+')
		if (*(str++) == '-')
			neg *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (int)str[i] - '0';
		if (is_nub(str[i + 1]) == 0)
		{
			break ;
		}
		i++;
	}
	return (r * neg);
}

// int	main(void)
// {
// 	int		r;
// 	char	str[50] = "\f\r \v\n\t+++---0283468465863267adg235";

// 	r = ft_atoi(str);
// 	printf("%d", r);
// }
