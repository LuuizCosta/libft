/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:19:20 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 18:31:55 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Allocates (with malloc(3)) and returns a newstring,
	which is the result of the concatenation of ’s1’ and ’s2’. */

#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		count;

	if (!(s1) || !(s2))
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	count = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[count] != '\0')
	{
		str[i + count] = s2[count];
		count++;
	}
	str[i + count] = '\0';
	return (str);
}
