/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:45:29 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 17:13:38 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Function that frees and clear a whole linked list

#include "libft.h"
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;					//Temporary holds the address of the next element of the list

	if (lst == NULL)				//Checking for bad parameters
		return ;
	while (*lst != NULL)			//Runs through the list
	{
		tmp = (*lst)->next;			//Holds the address of the next element
		ft_lstdelone(*lst, del);	//Deletes the element, freeing lst
		*lst = tmp;					//lst now points to the next element (that was being held at tmp)
	}
	*lst = NULL;					//Points to null
}
