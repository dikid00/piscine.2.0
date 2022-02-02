/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabarbas <mabarbas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:36:38 by mabarbas          #+#    #+#             */
/*   Updated: 2022/02/02 20:39:02 by mabarbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char **str, int size, char *sep)
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
	while (sep[i++] != 0)
		r++;
	return (r);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char c;
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (*(*strs))
		len += ft_strlen(strs, size, sep);
	printf("%d\n", len);
	// *strs = malloc(sizeof(char) * len)
	// while (**strs)
	// {
	// 	ft_putstr()
	// 	ft_putstr(sep);
	// }
	return (str);
}

int	main(void)
{
	char	*str;
	char	**sa;

	sa[0] = "123456";
	sa[1] = "abcde";
	sa[2] = "*+-=";
	str = "-, ";
	str = ft_strjoin(3, sa, str);
	printf("%s\n", str);
}
