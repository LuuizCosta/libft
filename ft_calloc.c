/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:43:49 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 16:44:14 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Recreates the function calloc

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*address;
	size_t	full_size;				//Full malloc size

	full_size = nmemb * size;
	address = malloc(full_size);
	if (address == NULL)			//Checking if the allocation was possible
		return (NULL);
	ft_bzero(address, full_size);	//Fills the allocated memory with 0
	return (address);
}
