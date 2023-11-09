/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gcaptari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:25:51 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/09 11:53:09 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;

	if (n == 0)
		return (dest);
	if (dest == NULL)
		return (NULL);
	if (src == NULL)
		return (dest);
	ptr = (unsigned char *)dest;
	while (n-- > 0 && *(unsigned char *)src)
		*ptr++ = *(unsigned char *)src++;
	return (dest);
}
