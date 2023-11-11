/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gcaptari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:11:32 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/09 15:54:31 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	ft_max(size_t n, size_t n2)
{
	if (n > n2)
		return (n);
	return (n2);
}

static void	ft_skip_table(size_t list_ascii[256],
		char *needle, const size_t n_len)
{
	size_t			i;

	i = 0;
	while (i < 256)
		list_ascii[i++] = n_len;
	i = 0;
	while (i < n_len - 1)
	{
		list_ascii[(size_t)needle[i]] = ft_max((n_len - i - 1), 1);
		i++;
	}
}

// char	*ft_strstr(const char *haystack, const char *needle)
// {
// 	size_t			list_ascii[256];
// 	size_t			i;
// 	const size_t	n_len = ft_strlen(needle);
// 	const size_t	h_len = ft_strlen(haystack);

// 	ft_skip_table(list_ascii, (char *)needle, n_len);
// 	i = 0;
// 	while (i <= h_len - n_len)
// 	{
// 		if (haystack[i + n_len - 1] == needle[n_len - 1])
// 			if (ft_memcmp(haystack + i, needle, n_len - 1) == 0)
// 				return (haystack + i);
// 		i += list_ascii[(size_t) haystack[i + n_len - 1]];
// 	}
// 	return (NULL);
// }

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t			list_ascii[256];
	size_t			i;
	const size_t	n_len = ft_strlen(needle);
	const size_t	h_len = ft_strlen(haystack);

	if (n < h_len || n_len == 0)
		return (NULL);
	ft_skip_table(list_ascii, (char *)needle, n_len);
	i = 0;
	while (i <= (n - n_len) && i <= n)
	{
		if (haystack[i + n_len - 1] == needle[n_len - 1])
			if (ft_memcmp(haystack + i, needle, n_len - 1) == 0)
				return (haystack + i);
		i += list_ascii[(size_t) haystack[i + n_len - 1]];
	}
	return (NULL);
}
