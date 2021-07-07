/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 17:00:11 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 16:54:25 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Recreates the function isprint

#include "libft.h"
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);  //Checks if it is a printable character
}
