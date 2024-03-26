/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:54:03 by bebuber           #+#    #+#             */
/*   Updated: 2024/03/23 10:05:23 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_memcpy(char *dst, const char *src, unsigned int len)
{
	unsigned int	a;
	
	a = 0;
	if (dst == 0 && src == 0)
		return (dst);
	
	while (a < len)
	{
		dst[a] = src[a];
		a++;
	}
	return (dst);
}