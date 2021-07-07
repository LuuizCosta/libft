/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 01:55:21 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 17:26:26 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Allocates (with malloc(3)) and returns a new element.
	The variable ’content’ is initialized with the value of the parameter ’content’.
	The variable ’next’ is initialized to NULL.*/

#include "libft.h"
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));	//Allocates the new element with the right size
	if (node == NULL)							//Checks if the allocation was successful
		return (NULL);
	node->content = content;					//Puts the content in the right place
	node->next = NULL;							//Next points to NULL.
	return (node);
}
