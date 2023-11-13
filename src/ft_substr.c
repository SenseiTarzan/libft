/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gcaptari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:37:42 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/13 09:58:29 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	const size_t		size = ft_strlen(str);
	char				*new_str;
	char				*tmp;
	char				*s;

	if (str == NULL || start > size || len == 0)
		return (ft_calloc(1, sizeof (char)));
	if ((start + len) > size)
		len = size - start;
	new_str = (char *) ft_calloc(len + 1, sizeof (char));
	if (new_str == NULL)
		return (NULL);
	tmp = ((char *)str) + start;
	s = new_str;
	while (len-- > 0 && *tmp)
		*s++ = *tmp++;
	return (new_str);
}
