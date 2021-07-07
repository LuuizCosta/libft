/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 17:04:02 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 18:32:16 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Recreates the function strlcpy

#include "libft.h"
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (src == NULL)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	while (count < size - 1 && src[count] != '\0')
	{
		dst[count] = src[count];
		count++;
	}
	dst[count] = '\0';
	return (ft_strlen(src));
}
