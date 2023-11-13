/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gcaptari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:25:51 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/13 09:58:13 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*lasr_s;
	char		*last_d;
	char		*d;
	const char	*s = src;

	d = dest;
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		lasr_s = (char *)s + (n - 1);
		last_d = d + (n - 1);
		while (n--)
			*last_d-- = *lasr_s--;
	}
	return (dest);
}
