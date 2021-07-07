/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 12:56:43 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 17:33:06 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Recreates the function memccpy

#include "libft.h"
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*d;
	char	*s;
	size_t	index;

	d = (char *)dest;										//d recieves the content of dest as it was a string
	s = (char *)src;										//s recieves the content of src as it was a string
	index = 0;
	while (index < n)										//We need to copy n bytes (passed as parameter)
	{
		d[index] = s[index];								//d gets s
		if ((unsigned char)s[index] == (unsigned char)c)	//If they have the same character at the same index
			return ((char *)dest + index + 1);				//Returns dest in the index position + 1 forward
		index++;
	}
	return (NULL);											//Returns null if the character passed as parameter can't be found in the first n bytes
}
