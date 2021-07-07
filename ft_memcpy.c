/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 21:20:19 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 17:37:57 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Recreates the function memcpy

#include "libft.h"
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	       size_t	count;
	unsigned char	*destination;
	unsigned char	*source;

	if (!(src) && !(dest))						//Checks for bad parameters
		return (NULL);
	count = 0;
	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	while (count < n)							//In the first n bytes
	{
		destination[count] = source[count];		//destination recieves the content of source
		count++;
	}
	return (dest);
}
