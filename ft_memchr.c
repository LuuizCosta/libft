/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 20:51:09 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 17:35:09 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Recreates the function memchr

#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;
	unsigned char	character;

	string = (unsigned char *)s;
	character = (unsigned char)c;
	while (n--)							//Only looks in the first n bytes
	{
		if (*string == character)		//Looks for the first occurency of character c in the string
		{
			return (string);			//returns the string after the first occurency of character c
		}
		string++;
	}
	return (NULL);						//Returns null if it doesn't find c in the first n bytes
}
