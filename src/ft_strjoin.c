/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gcaptari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:34:04 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/14 09:43:03 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	const size_t	s1_len = ft_strlen(s1);
	const size_t	s2_len = ft_strlen(s2);
	char			*new_str;
	char			*tmp;

	new_str = ft_calloc(s1_len + s2_len + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	tmp = new_str;
	ft_memmove(new_str, s1, s1_len);
	ft_memmove(new_str + s1_len, s2, s2_len);
	return (new_str);
}
