/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gcaptari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:46:45 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/09 11:48:01 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *v1, int c, size_t n)
{
	size_t			index;

	index = 0;
	c = (unsigned char )c;
	while (index++ < n)
	{
		if (*(unsigned char *)v1 == c)
			return ((void *)v1);
		v1++;
	}
	return (NULL);
}
