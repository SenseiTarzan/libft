/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gcaptari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:38:17 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/09 12:16:19 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	const size_t	src_length = ft_strlen(src);
	char			*tmp;

	tmp = (char *)src;
	if (size == 0)
		return (src_length);
	while (size-- > 0)
		*dest++ = *tmp++;
	*dest = 0;
	return (src_length);
}
