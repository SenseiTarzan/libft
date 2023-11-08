/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gcaptari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:33:48 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/08 15:11:38 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;

	if (n == 0)
		return (dest);
	if (dest == NULL)
		return (NULL);
	if (src == NULL)
		return (dest);
	ptr = (unsigned char *)dest;
	while (n-- > 0)
		*ptr++ = *(unsigned char *)src++;
	return (dest);
}
