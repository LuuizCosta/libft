/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 18:53:25 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 17:41:46 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Outputs the character ’c’ to the given file descriptor.

#include "libft.h"
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
