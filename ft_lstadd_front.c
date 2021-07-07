/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 02:37:29 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 17:10:48 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Function that adds an element to the beginning of a linked list

#include "libft.h"
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)		//Checks for bad parameters
	{
		new->next = *lst;				//new points to the first element of a linked list
		*lst = new;						//lst now points to new, that points to the rest of the linked list as it was
	}
}
