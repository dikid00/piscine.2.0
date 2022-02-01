/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:17:51 by mabarbas          #+#    #+#             */
/*   Updated: 2022/01/18 15:20:05 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	nchar;

	nchar = 0;
	while (*str != 0)
	{
		nchar++;
		str++;
	}
	return (nchar);
}
