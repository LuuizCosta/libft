/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 22:50:00 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 18:35:26 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Allocates (with malloc(3)) and returns a substring from the string ’s’.
	The substring begins at index ’start’ and is of maximum size ’len’*/

#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	count;

	count = 0;
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		substring = (char *)ft_calloc(sizeof(char), 1);
		if (!(substring))
			return (NULL);
		return (substring);
	}
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	substring = (char *)ft_calloc(sizeof(char), (len + 1));
	if (!substring)
		return (NULL);
	while (count < len)
	{
		substring[count] = s[start + count];
		count++;
	}
	return ((char *)substring);
}
