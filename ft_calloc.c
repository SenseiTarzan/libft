/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gabrielcaptari@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:14:33 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/27 10:16:17 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*v;
	size_t	len;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (count > ((size_t) -1) / size)
		return (NULL);
	len = count * size;
	v = malloc(len);
	if (v)
		ft_bzero(v, len);
	return (v);
}
