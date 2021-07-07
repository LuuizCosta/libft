/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufernan <lufernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:38:46 by lufernan          #+#    #+#             */
/*   Updated: 2021/07/07 17:15:07 by lufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Deletes the content of a linked list and frees it

#include "libft.h"
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)			//Checking for bad parameters
		return ;
	del(lst->content);			//Applies the function del to the content of the list
	free(lst);
}
