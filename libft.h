/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:20:27 by tmelia            #+#    #+#             */
/*   Updated: 2019/09/05 18:51:10 by tmelia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
	size_t	ft_strlen(const char *s);
	char	*ft_strdup(const char *s1);
	char	*ft_strcpy(char *dest, char *src);
	char	*ft_strncpy(char *dest, const char *src, size_t n);
	char	*ft_strcat(char *dest, const char *src);
	char	*ft_strncat(char *dest, const char *src, size_t n);
	size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t size);
	size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t size);
	char	*ft_strchr(const char *s, int c);
	char	*ft_strrchr(const char *s, int c);
	char	*ft_strstr(const char *haystack, const char *needle);
	char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
	int		ft_strcmp(const char *s1, const char *s2);
	int		ft_strncmp(const char *s1, const char *s2, size_t n);
	int		ft_atoi(const char *str);
	int		ft_isalpha(int c);
	int		ft_isdigit(int c);
	int		ft_isalnum(int c);
	int		ft_isascii(int c);
	int		ft_toupper(int c);
	int		ft_tolower(int c);
#endif
