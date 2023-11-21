/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gcaptari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:25:51 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/14 09:41:51 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*s;

	if (n == 0)
		return (NULL);
	if (dest == NULL)
		return (NULL);
	s = (unsigned char *)dest;
	while (n-- > 0)
		*s++ = (unsigned char )c;
	return (dest);
}
