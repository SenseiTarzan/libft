/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gabrielcaptari@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:22:52 by sgabsi            #+#    #+#             */
/*   Updated: 2023/11/21 12:53:19 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	ft_strlen_split(const char *str,
				char sepparator, unsigned char value)
{
	const char	*tmp;

	tmp = str;
	if (value)
		while (*tmp && *tmp == sepparator)
			tmp++;
	else
		while (*tmp && *tmp != sepparator)
			tmp++;
	return (tmp - str);
}

static size_t	ft_count_world(const char *str, char sepparator)
{
	const char	*tmp;
	char		*tmp_add;
	size_t		count;

	tmp = str;
	count = 0;
	while (*tmp)
	{
		tmp_add = (char *)tmp + 1;
		tmp += ft_strlen_split(tmp, sepparator, 1);
		if (*tmp == 0)
			break ;
		count++;
		tmp += ft_strlen_split(tmp, sepparator, 0);
	}
	return (count);
}

static unsigned char	free_all(void **ptr, size_t size)
{
	if (ptr == NULL)
		return (0);
	while (size > 0 && ptr[size] != NULL)
		free(ptr[size--]);
	free(ptr);
	return (0);
}

char	**ft_split(const char *str, char sepparator)
{
	char					**sp;
	char					**tmp_sp;
	char					*tmp;
	struct s_bypass_split	k;

	tmp = (char *)str;
	k.spliter_count = ft_count_world(tmp, sepparator);
	sp = (char **)ft_calloc((k.spliter_count + 1), sizeof(char *));
	if (!sp)
		return (NULL);
	tmp_sp = sp;
	while (*tmp != 0)
	{
		tmp += ft_strlen_split(tmp, sepparator, 1);
		if (*tmp == 0)
			break ;
		k.len = ft_strlen_split(tmp, sepparator, 0);
		*tmp_sp = ft_substr(tmp, 0, k.len);
		if (!(*tmp_sp) && !free_all((void **)sp, (tmp_sp - sp)))
			return (NULL);
		tmp += k.len;
		tmp_sp++;
	}
	return (sp);
}
