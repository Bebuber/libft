/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:30:03 by bebuber           #+#    #+#             */
/*   Updated: 2024/03/26 20:46:18 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;
	unsigned int	m;
	unsigned int	k;

	i = 0;
	k = 0;
	while (dest[i] != 0)
		i++;
	m = i;
	while (src[k] != 0)
		k++;
	if (size <= i)
		return (size + k);
	n = 0;
	while (src[n] != 0 && n < (size - m - 1))
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	dest[i] = 0;
	return (m + k);
}
