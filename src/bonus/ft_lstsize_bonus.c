/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gabrielcaptari@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:15:28 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/21 12:41:36 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*backup;

	size = 0;
	backup = lst;
	while (backup)
	{
		size++;
		backup = backup->next;
	}
	return (size);
}
