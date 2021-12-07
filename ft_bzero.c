/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 21:11:33 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 16:44:24 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Recreates the function bzero.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);					//Uses memset to change the memory area to 0.
}
