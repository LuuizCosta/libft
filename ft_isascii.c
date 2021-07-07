/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:46:34 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 16:52:58 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Recreates the function isascii

#include "libft.h"
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);		//Checks if it's in the range of the standard ascii table
