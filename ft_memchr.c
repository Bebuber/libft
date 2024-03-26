/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:45:17 by bebuber           #+#    #+#             */
/*   Updated: 2024/03/23 23:08:12 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	
	if (n == 0)
		return(0);
	const unsigned char *p = s;
	unsigned char uc = c;
	while (n > 0)
	{
		if (*p == uc)
			return((void *)p);
		p++;
		n--;
	}
	return (0);
}