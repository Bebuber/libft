/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 11:11:45 by bebuber           #+#    #+#             */
/*   Updated: 2024/03/26 20:52:35 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *haystack, char *needle, unsigned int len)
{
	unsigned int	i;
	unsigned int	n;

	if (*needle == 0)
		return (haystack);
	i = 0;
	while (haystack[i] != 0 && len > 0)
	{
		n = 0;
		while (haystack[i + n] == needle[n] && needle[n] != 0 && n < len)
			n++;
		if (needle[n] == 0)
			return (haystack + i);
		i++;
		len--;
	}
	return (0);
}
