/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gabrielcaptari@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:46:45 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/24 10:30:13 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *v1, const void *v2, size_t n)
{
	unsigned char	s1;
	unsigned char	s2;
	size_t			index;

	index = 0;
	while (index++ < n)
	{
		s1 = (unsigned char) *(unsigned char *)v1++;
		s2 = (unsigned char) *(unsigned char *)v2++;
		if (s1 != s2)
			return (s1 - s2);
	}
	return (0);
}
