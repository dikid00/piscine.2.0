/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:27:26 by mabarbas          #+#    #+#             */
/*   Updated: 2022/02/02 21:01:22 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char **str, int size, char *mid)
{
	int	i;
	int	y;
	int	r;

	i = 0;
	y = 0;
	r = 0;
	while (i < size)
	{
		y = 0;
		while (str[i][y])
		{
			y++;
			r++;
		}
		i++;
	}
	i = 0;
	while (mid[i] != '\0')
	{
		i++;
		r++;
	}
	return (r);
}

int	main(void)
{
	char	*str = NULL;
	char	**sa = NULL;
	int		y;
	char	c;
	int		i;

	c = 48;
	y = 6;
	i = 0;
	while (y > 0)
	{
		sa[0][i] = c;
		c++;
		i--;
	}
	c = 97;
	y = 5;
	i = 0;
	while (y > 0)
	{
		sa[1][i] = c;
		c++;
		i--;
	}
	c = 40;
	y = 4;
	i = 0;
	while (y > 0)
	{
		sa[2][i] = c;
		c++;
		i--;
	}
	str = "-, ";
	y = ft_strlen(sa, 3, str);
	printf("%d", y);
	return (0);
}
