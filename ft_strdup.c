/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 17:54:22 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 18:31:11 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Recreates the function strdup. Duplicates a string on a previously allocated new string.

#include "libft.h"
char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*newstr;

	len = ft_strlen(s) + 1;
	newstr = malloc (len * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	ft_memcpy(newstr, s, len);
	return (newstr);
}
