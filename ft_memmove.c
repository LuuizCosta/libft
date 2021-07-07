/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:39:03 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 17:39:29 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Recreates the function memmove

#include "libft.h"
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*final_dest;
	unsigned char	*copy_from;

	if (!(dest) && !(src))								//Checks for bad parameters
		return (NULL);
	if (n == 0)
		return (dest);									//Checks for bad parameters
	if (src < dest)										//If they overlap, start copying from the end to the beginning
	{
		final_dest = (unsigned char *)dest + n - 1;
		copy_from = (unsigned char *)src + n - 1;
		while (n--)
		{
			*final_dest = *copy_from;
			copy_from--;
			final_dest--;
		}
	}	
	else
		ft_memcpy(dest, src, n);						//Otherwise, just uses memcpy
	return (dest);
}
