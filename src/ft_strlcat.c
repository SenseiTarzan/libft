/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gcaptari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:38:17 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/14 12:00:36 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	const char		*s = src;
	size_t			src_length;
	char			*tmp;
	size_t			dest_length;

	src_length = ft_strlen(src);
	if (size == 0)
		return (src_length);
	dest_length = ft_strlen(dest);
	if (size < dest_length)
		src_length += size;
	else
		src_length += dest_length;
	tmp = dest + dest_length;
	while (*s != 0 && (size_t)(tmp - dest) < (size_t)(size - 1) && dest != src)
		*tmp++ = *s++;
	*tmp = '\0';
	return (src_length);
}
