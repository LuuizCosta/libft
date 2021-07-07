/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 14:05:40 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 16:44:21 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Recreation of the function atoi, that transforms char to int

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	res;
	int	sign;
	int	index;

	res = 0;
	sign = 1;
	index = 0;
	while (nptr[index] == ' ' || nptr[index] == '\t'				//Looks for spaces
		|| nptr[index] == '\n' || nptr[index] == '\v'
		|| nptr[index] == '\f' || nptr[index] == '\r')
		index++;
	if (nptr[index] == '-' || nptr[index] == '+')					//Changes the signal
	{
		if (nptr[index] == '-')
			sign = -1;
		index++;
	}
	while (nptr[index] >= '0' && nptr[index] <= '9')				//Looks for numbers
	{
		res = res * 10 + nptr[index] - '0';							//Start putting the numbers in their correct places
		index++;
	}
	return (res * sign);											//Returns the signal with the right signal
