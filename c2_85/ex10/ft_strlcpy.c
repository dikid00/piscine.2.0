/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:38:41 by mabarbas          #+#    #+#             */
/*   Updated: 2022/01/22 21:18:23 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strlength(char *src)
{
	int	i;

	i = 0;
	while (src[i++] != '\0')
	{
	}
	return (i - 1);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size < 1)
	{
		return (strlength(src));
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (strlength(src));
}
