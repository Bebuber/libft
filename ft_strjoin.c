/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:12:00 by bebuber           #+#    #+#             */
/*   Updated: 2024/03/26 12:32:39 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int	len;
	int	a;
	int	i;

	a = 0;
	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	new = (char *)malloc(len + 1);
	if (new == NULL)
		return (NULL);
	while (s1[i] != 0)
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[a] != 0)
	{
		new[i] = s2[a];
		i++;
		a++;
	}
	new[i] = '\0';
	return (new);
}
