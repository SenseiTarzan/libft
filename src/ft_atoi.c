/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gcaptari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:34:29 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/15 16:19:19 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_skip_epmty_text(char *str)
{
	while (*str >= 9 && *str <= 32)
		str++;
	return (str);
}

int	ft_atoi(const char *str)
{
	unsigned int	number;
	int				signe;
	char			*tmp;

	if (*str == 0)
		return (0);
	tmp = (char *)str;
	number = 0;
	tmp = ft_skip_epmty_text(tmp);
	signe = 1;
	if (*tmp == 43 || *tmp == 45)
	{
		if (*tmp == 45)
			signe = -signe;
		tmp++;
	}
	while (*tmp && ft_isdigit(*tmp))
	{
		number = number * 10 +(*tmp++) - 48;
	}
	return (signe * number);
}
