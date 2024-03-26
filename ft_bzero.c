/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:25:57 by bebuber           #+#    #+#             */
/*   Updated: 2024/03/22 16:48:19 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_bzero(char *s, int len)
{
	int	a;

	a = 0;
	if (len != 0)
	{
		while (a < len)
		{
			s[a] = 0;
			a++;
		}
	}
	return (0);
}
