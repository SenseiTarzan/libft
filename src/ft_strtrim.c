/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gcaptari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:37:51 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/13 15:04:06 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

unsigned char	is_set_char(const char *set, int c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static size_t	ft_strtrim_length(const char *str, size_t len,
	const char *set, int c)
{
	char		*tmp;

	tmp = (char *)str;
	if (c == 0)
	{
		while (*tmp && is_set_char(set, *tmp))
			tmp++;
	}
	else if (c == 1)
	{
		tmp += len -1;
		while (*tmp && is_set_char(set, *tmp))
			tmp--;
	}
	return (tmp - str);
}

char	*ft_strtrim(char *str, const char *set)
{
	char							*tmp;
	char							*new_str;
	char							*s;
	const size_t					len = ft_strlen(str);
	t_bypass_trim					trim;

	trim = (t_bypass_trim){.len_start = ft_strtrim_length(str, len, set, 0),
		.len_end = ft_strtrim_length(str, len, set, 1)};
	tmp = (char *)str;
	new_str = calloc(len - (trim.len_end + trim.len_start) + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	tmp = str + trim.len_start;
	s = new_str;
	while (*tmp && (tmp - str) <= (len - trim.len_end - 1))
		*s++ = *tmp++;
	return (new_str);
}
