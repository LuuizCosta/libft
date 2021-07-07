/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 19:45:52 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 17:45:14 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Outputs the integer ’n’ to the given file descriptor.

#include "libft.h"
void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;						//To cover the min value of an Int

	if (n < 0)								//Checks if its negative
	{
		write(fd, "-", 1);					//Writes the signal"-"
		i = -n;								//i gets the positive value of n
	}
	else
		i = n;
	if (i > 9)
		ft_putnbr_fd((i / 10), fd);			//The function calls itself until there is only one unit
	ft_putchar_fd((i % 10 + '0'), fd);		//Uses putchar to write the string
}
