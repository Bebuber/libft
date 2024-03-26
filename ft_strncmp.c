/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:01:56 by bebuber           #+#    #+#             */
/*   Updated: 2024/03/23 17:42:32 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(unsigned char *s1, unsigned char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 1)
		return (*s1 - *s2);
	while (i < n)
	{
		if (*s1 == 0 || *s2 == 0)
			return (*s1 - *s2);
		else if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else if (*s1 != *s2)
			return (*s1 - *s2);
		i++;
	}
	return (0);
}