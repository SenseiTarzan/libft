/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gcaptari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:38:17 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/13 15:10:19 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	const size_t	src_length = ft_strlen(src);
	char			*tmp;

	if (size == 0)
		return (src_length);
	tmp = (char *)src;
	while (size-- > 1 && *tmp)
		*dest++ = *tmp++;
	*dest = 0;
	return (src_length);
}
