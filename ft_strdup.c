/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:26:50 by bebuber           #+#    #+#             */
/*   Updated: 2024/03/24 18:09:14 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(char *s1)
{
	int len = 0;
	char *ptr = s1;
	
	while (*ptr != 0)
	{
		ptr++;
		len++;
	}
	
	char *s2 = malloc(len + 1);
	
	if (s2 != 0)
	{
		char *ptr2 = s2;
		while(*s1 != 0)
		{
			*ptr2 = *s1;
			s1++;
			ptr2++;
		}
		*ptr2 = 0;
	}
	return (s2);
}