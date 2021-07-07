/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 22:06:35 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 18:32:11 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Recreates the function strlcat

#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	count;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	count = 0;
	if (len_dst >= size)
		return (size + len_src);
	while ((src[count] != '\0') && (len_dst + count) < (size - 1))
	{
		dst[len_dst + count] = src[count];
		count++;
	}
	dst[len_dst + count] = '\0';
	return (len_dst + len_src);
}
