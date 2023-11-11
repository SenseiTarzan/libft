/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gcaptari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:02:44 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/09 12:45:14 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *src)
{
	const size_t	len = ft_strlen(src);
	void			*new_str;

	new_str = ft_calloc(len + 1, sizeof (char));
	if (new_str == NULL)
		return (NULL);
	ft_memcpy(new_str, src, len);
	return ((char *) new_str);
}
