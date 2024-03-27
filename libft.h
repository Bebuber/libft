/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:49:22 by bebuber           #+#    #+#             */
/*   Updated: 2024/03/27 17:32:28 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
size_t		ft_strlen(const char *str);
void		*ft_memset(void *b, int c, size_t len);
char		ft_bzero(char *s, int len);
char		*ft_memcpy(char *dst, char *src, unsigned int len);
char		*ft_memmove(char *dst, const char *src, int len);
unsigned	int	ft_strlcpy(char *dest, const char *src, size_t size);
unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(char *s1, char *s2, int n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const char *s1, const char *s2, unsigned int n);
char		*ft_strnstr(char *haystack, char *needle, unsigned int len);
int			ft_atoi(const char *str);
void		*ft_calloc(size_t count, size_t size);
char		*ft_strdup(char *s1);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);

#endif