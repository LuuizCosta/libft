/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 03:11:23 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 17:18:03 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Function that goes to the last element of a linked list

#include "libft.h"
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)				//Checks for bad parameters
		return (NULL);
	while (lst->next != NULL)		//Looks for the last element of the linked list
	{
		lst = lst->next;
	}
	return (lst);
}
