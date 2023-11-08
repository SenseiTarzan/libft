/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gcaptari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:38:17 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/08 14:59:41 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	*ft_strlcat(char *dest, const char *src, size_t size)
{
	const size_t	src_length = ft_strlen(src);
	const size_t	dest_length = ft_strlen(dest);

	dest += dest_length;
	while (size-- > 0)
		*dest++ = *src++;
	*dest = 0;
	return (src_length + dest_length);
}
