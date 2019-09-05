/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:20:27 by tmelia            #+#    #+#             */
/*   Updated: 2019/09/05 16:31:48 by tmelia           ###   ########.fr       */
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
#endif
