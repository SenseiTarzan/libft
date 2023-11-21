/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gcaptari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:25:51 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/14 09:31:27 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char		*lasr_s;
	unsigned char			*last_d;
	unsigned char			*d;
	const unsigned char		*s = (const unsigned char *)src;

	d = (unsigned char *)dest;
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		lasr_s = (unsigned char *)s + (n - 1);
		last_d = d + (n - 1);
		while (n--)
			*last_d-- = *lasr_s--;
	}
	return (dest);
}
