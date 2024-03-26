/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 23:13:01 by bebuber           #+#    #+#             */
/*   Updated: 2024/03/24 11:10:30 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(const char *s1, const char *s2, unsigned int n)
{
	const unsigned char *p1 = (const unsigned char *)s1;
	const unsigned char *p2 = (const unsigned char *)s2;
	
	while ( n > 0 )
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		n--;
	}
	return(0);
}