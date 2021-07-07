/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 12:42:25 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 18:33:26 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Recreates the function strnstr

#include "libft.h"

static char	*only_one_char(const char *big, const char *little, size_t len)
{
	size_t	count;

	count = -1;
	while (++count < len)
	{
		if (big[count] == little[0])
			return ((char *)big + count);
		count++;
	}
	return (NULL);
}

static char	*more_than_one_char(const char *big, const char *little, size_t len)
{
	size_t	count;
	size_t	count_little;
	size_t	found;

	count = -1;
	while (++count < len)
	{
		found = (count + 1);
		count_little = 0;
		if (big[count] == little[count_little])
		{
			while (big[(found)] == little[(count_little) + 1] && found < len)
			{
				found++;
				count_little++;
				if (little[(count_little + 1)] == '\0')
					return ((char *)big + (count));
			}
		}
	}
	return (NULL);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (len > ft_strlen(big))
		len = ft_strlen(big);
	if (*little == 0)
		return ((char *)big);
	if (ft_strlen(little) == 1)
		return (only_one_char(big, little, len));
	return (more_than_one_char(big, little, len));
}
