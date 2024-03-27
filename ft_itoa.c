/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:44:18 by bebuber           #+#    #+#             */
/*   Updated: 2024/03/28 00:06:02 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_negative(int nint size, int ng)
{
	if (n == -2147483648)
	{
		ng = 1;
		nb = n;
		n = 2147483647;
		size++;
	}
}

char	*ft_itoa(int n)
{
	char	*num;
	int		size;
	int		nb;
	int		ng;
	int		b;

	size = 0;
	ng = 0;
	nb = 0;
	if (n == -2147483648)
	{
		ng = 1;
		nb = n;
		n = 2147483647;
		size++;
	}
	else if (n < 0)
	{
		n = -n;
		ng = 1;
		size++;
	}
	else if (n == 0)
		size++;
	if (nb != -2147483648 && n > 0)
		nb = n;
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	num = (char *)malloc((size + 1) * sizeof(char));
	if (num == NULL)
		return (NULL);
	b = size;
	num[b] = '\0';
	b--;
	if (nb == -2147483648)
	{
		num[b] = '8';
		b--;
		nb = 214748364;
	}
	while (nb > 0)
	{
		num[b] = nb % 10 + '0';
		nb = nb / 10;
		b--;
	}
	if (b == 0 && ng == 1)
	{
		num[b] = '-';
		b--;
	}
	else if (nb == 0 && b == 0)
	{
		num[b] = '0';
		b--;
	}
	return (num);
}
