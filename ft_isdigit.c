/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:35:38 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 16:54:01 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Recreates the function isdigit

#include "libft.h"
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');	//checks if the int is a digit
}
