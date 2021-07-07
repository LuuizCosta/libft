/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:32:15 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 17:24:09 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Iterates the list ’lst’ and applies the function ’f’ to the content of each element.
  Creates a new list resulting of the successive applications of the function ’f’.
  The ’del’ function is used to delete the content of an element if needed. */

#include "libft.h"
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;

	new = NULL;									//Creates the new list
	if (lst == NULL)							//Checks for bad parameters
		return (NULL);
	while (lst != NULL)							//Runs through lst
	{
		tmp = ft_lstnew(f(lst->content));		//Creates a list with the content of lst after going through the function *f
		if (tmp == NULL)
			ft_lstclear(&tmp, del);				//If something goes wrong, clears the tmp list
		lst = lst->next;
		ft_lstadd_back(&new, tmp);				//Adds tmp to the end of the new linked list
	}
	return (new);
}
