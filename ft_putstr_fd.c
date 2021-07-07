/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 18:55:25 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 17:46:04 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Outputs the string ’s’ to the given file descriptor.

#include "libft.h"
void	ft_putstr_fd(char *s, int fd)
{
	size_t	count;

	if (s == NULL)						//checks for bad parameters
		return ;
	count = 0;
	while (s[count] != '\0')			//Writes until it reaches the end of the string
	{
		write (fd, &s[count], 1);
		count++;
	}
}
