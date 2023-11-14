/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gcaptari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:37:51 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/14 08:54:43 by gcaptari         ###   ########.fr       */
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
	size_t		i;

	tmp = (char *)str;
	i = 0;
	if (c == 0)
		while (*tmp && is_set_char(set, *tmp++))
			i++;
	else if (c == 1)
	{
		tmp += len - 1;
		while (*tmp && is_set_char(set, *tmp--))
			i++;
	}
	return (i);
}


char	*ft_strtrim(const char *str, const char *set)
{
	char							*tmp;
	char							*new_str;
	char							*s;
	const size_t					len = ft_strlen(str);
	t_bypass_trim					trim;

	trim.len_start = ft_strtrim_length(str, len, set, 0);
	if (trim.len_start == len)
		return (ft_calloc(1, sizeof(char)));
	tmp = (char *)str;
	trim.len_end = ft_strtrim_length(str, len, set, 1);
	new_str = calloc(len - (trim.len_end + trim.len_start) + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	tmp = (char *)str + trim.len_start;
	s = new_str;
	while (*tmp && (size_t)(tmp - str) <= (len - trim.len_end - 1))
		*s++ = *tmp++;
	return (new_str);
}
