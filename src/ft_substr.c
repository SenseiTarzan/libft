/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gcaptari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:37:42 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/09 12:15:37 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	const size_t		*size = ft_strlen(str);
	char				*new_str;
	char				*tmp;
	char				*s;

	if (str == NULL || start > size || len == 0)
		return (NULL);
	if ((start + len) > size)
		len = size - start;
	new_str = (char *) malloc(sizeof (char) * len + 1);
	if (new_str == NULL)
		return (NULL);
	tmp = ((char *)str) + start;
	s = new_str;
	while (len-- > 0)
		*s++ = *tmp++;
	*s = 0;
	return (new_str);
}
