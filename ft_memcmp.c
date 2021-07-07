/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 21:39:00 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 17:36:53 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Recreates the function memcmp

#include "libft.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n--)								//In the first n bytes
	{
		if (*str1 != *str2)					//If the characters differ
			return (*str1 - *str2);			//Returns their difference
		str1++;
		str2++;
	}
	return (0);								//If they are the same in the first n bytes, returns 0
}
