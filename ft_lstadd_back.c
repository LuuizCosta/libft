/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 03:31:02 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 17:08:48 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Function that adds an element to the end of a linked list

#include "libft.h"
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst == NULL)				//Checking for bad parameters
		return ;
	if (*lst == NULL)				//If it's pointing to NULL
	{
		*lst = new;					//It now points to new
		return ;
	}
	ft_lstlast(*lst)->next = new;	//Calls a function that makes the last element of the list point to new
}
