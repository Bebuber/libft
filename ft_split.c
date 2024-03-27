/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 20:17:33 by bebuber           #+#    #+#             */
/*   Updated: 2024/03/27 17:34:52 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_rows(const char *s, char c)
{
	int	rows;
	int	n;

	n = 0;
	rows = 0;
	while (s[n] != '\0')
	{
		if (n == 0 && s[n] != c && s[n] != 0)
		{
			rows++;
			n++;
		}
		else if (s[n] == c && s[n + 1] != c && s[n + 1] != '\0')
		{
			rows++;
			n++;
		}
		else
			n++;
	}
	return (rows);
}

int	ft_size_cols(const char *s, char c, int n)
{
	int	size;

	size = 0;
	while (s[n] != c && s[n])
	{
		size ++;
		n++;
	}
	return (size);
}

char	**ft_free_return_null(char **arr, int p)
{
	while (p > 0)
	{
		free(arr[p]);
		p--;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		rows;
	int		size;
	int		n;
	int		p;

	rows = ft_count_rows(s, c);
	arr = (char **)malloc((rows + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	n = 0;
	p = 0;
	while (p < rows)
	{
		while (s[n] == c)
			n++;
		size = ft_size_cols(s, c, n);
		arr[p] = ft_substr(s, n, size);
		if (arr == NULL)
			return (ft_free_return_null(arr, p));
		n = size + n;
		p++;
	}
	arr[p] = 0;
	return (arr);
}
