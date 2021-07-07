/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 02:58:40 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 17:27:59 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Counts the number of elements in a list.

#include "libft.h"
int	ft_lstsize(t_list *lst)
{
	int	size;

	if (lst == NULL)				//Checks for bad parameters
		return (0);
	size = 1;						//The list isn't null, so there is at least one element
	while (lst->next != NULL)		//Runs through the list
	{
		size++;						//Adds size to the value everytime it finds a new element
		lst = lst->next;			//Goes to the next element
	}
	return (size);
}
