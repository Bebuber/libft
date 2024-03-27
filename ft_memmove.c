/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 09:52:24 by bebuber           #+#    #+#             */
/*   Updated: 2024/03/26 20:53:29 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_memmove(char *dst, const char *src, int len)
{
	int	a;

	a = 0;
	if ((dst == src) || len == 0)
		return (dst);
	if (dst < src || dst >= src + len)
	{
		while (a < len)
		{
			dst[a] = src[a];
			a++;
		}
	}
	else
	{
		a = len - 1;
		while (a >= 0)
		{
			dst[a] = src[a];
			a--;
		}
	}
	return (dst);
}
