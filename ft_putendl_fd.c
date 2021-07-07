/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 19:15:26 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 17:41:43 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Outputs the string ’s’ to the given file descriptor, followed by a newline.

#include "libft.h"
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
