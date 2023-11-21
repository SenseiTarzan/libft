/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gabrielcaptari@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:23:07 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/21 12:40:09 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{

	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void	ft_lstdelone(t_list *lst, void (*del)(void *))
// {
// 	t_list	*backup;

// 	if (!lst)
// 		return ;
// 	if (del)
// 		del(lst->current);
// 	if (lst->next)
// 	{
// 		backup = lst->next;
// 		lst->current = backup->current;
// 		lst->next = backup->next;
// 		free(backup);
// 		return ;
// 	}
// 	free(lst);
// }