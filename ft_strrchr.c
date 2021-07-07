/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:37:58 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 18:33:32 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Recreates the function strrchr

#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	size_t	count;

	count = ft_strlen(s);
	while (count > 0)
	{
		if (s[count] == (char)c)
			return ((char *)s + count);
		count--;
	}
	if (s[count] == (char)c)
		return ((char *)s + count);
	return (NULL);
}
