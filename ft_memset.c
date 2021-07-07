/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 20:03:51 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 17:40:22 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Recreates the function memset

#include "libft.h"
void	*ft_memset(void *str, int c, size_t n)
{
	       size_t	count;
	unsigned char	*string;
	unsigned char	new_value;

	count = 0;
	string = str;
	new_value = (unsigned char)c;
	while (count < n)						//In the first n bytes
	{
		string[count] = new_value;			//string recieves the new value, passed as parameter (c)
		count++;
	}
	return (string);
}
