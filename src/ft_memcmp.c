/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gcaptari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:46:45 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/09 15:38:22 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *v1, const void *v2, size_t n)
{
	unsigned char	delta;
	size_t			index;

	index = 0;
	while (index++ < n)
	{
		delta = (unsigned char) *(unsigned char *)v1++
			- (unsigned char) *(unsigned char *)v2++;
		if (delta)
			return (delta);
	}
	return (0);
}
