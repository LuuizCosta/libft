/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:22:14 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 17:16:51 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Function that iterates in the linked list

#include "libft.h"
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL)				//Checks for bad parameters
		return ;
	while (lst->next != NULL)		//Runs through the list
	{
		f(lst->content);			//Applies the function f to the content
		lst = lst->next;			//Goes to the next element
	}
	f(lst->content);				//Applies the funtion f to the last content of the linked list
}
