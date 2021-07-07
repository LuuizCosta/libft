/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 21:31:30 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 17:04:51 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Recreates the function itoa, that transforms int into char

#include "libft.h"
static int	digit_count(int n)
{
	int				digits;						//Number of digits
	unsigned int	nbr;						//Unsigned int allow us to check the min value of an int

	nbr = n;
	digits = 1;									//Always starts with one digit
	if (n < 0)									//If the number is negative
	{
		nbr = -n;								//nbr gets the positive value of n
		digits++;								//Adds a digit for the "-" signal
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		digits ++;								//Checks how many digits there are
	}
	return (digits);							//Returns the size that needs to be allocated 
}

static void	string(char *s, unsigned int num, int digits, int neg)
{
	s[digits] = '\0';							//Puts a null byte at the end of the string
	if (num > 9)
	{
		while (digits--)
		{
			s[digits] = (num % 10) + '0';		//The string is written from the end to the beginning
			num = num / 10;
		}
	}
	else
		s[digits - 1] = (num % 10) + '0';
	if (neg < 0)
		s[0] = '-';
}

char	*ft_itoa(int n)
{
	char			*s;
	unsigned int	num;
	int				digits;
	int				neg;

	neg = 0;
	s = (char *)malloc((digit_count(n) + 1) * sizeof(char));	//Allocates the right size of the string
	if (s == NULL)												//If the allocation goes wrong, returns NULL
		return (NULL);
	num = n;
	digits = digit_count(n);
	if (n < 0)
	{
		neg = -1;
		num = (n * -1);
	}
	string(s, num, digits, neg);
	return (s);
}
