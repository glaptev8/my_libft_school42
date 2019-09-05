/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:28:00 by tmelia            #+#    #+#             */
/*   Updated: 2019/09/05 16:33:02 by tmelia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	/*for ft_strlen*/
//	printf("%zu", ft_strlen("gleb"));
	/*for  ft_strdup*/
//	printf("%s", ft_strdup("gleb"));
	/*for ft_strcup*/
	char gleb[] = "gleb";
//	printf("%s", ft_strcpy(gleb, "gleb"));
	/*for ft_strncpy*/
//	printf("%s", ft_strncpy(gleb, "gleb", 2));
//	printf("%s", strncpy(gleb, "gleb", 2));
	/*for ft_strcat*/
	printf("%s", ft_strcat(gleb, " laptev"));
	return (0);
}
