/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gcaptari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:46:45 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/07 13:44:32 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *v1, const void *v2, size_t n)
{
	unsigned char	u1;
	unsigned char	u2;
	size_t			index;

	index = 0;
	while (index++ < n)
	{
		u1 = (unsigned char) *(unsigned char *)v1++;
		u2 = (unsigned char) *(unsigned char *)v2++;
		if (u1 != u2)
			return (u1 - u2);
		else if (u1 == 0)
			return (0);
	}
	return (0);
}
