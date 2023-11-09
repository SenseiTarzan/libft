/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaptari <gcaptari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:34:29 by gcaptari          #+#    #+#             */
/*   Updated: 2023/11/09 11:42:17 by gcaptari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char	*ft_skip_epmty_text(char *str)
{
	while (*str >= 9 && *str <= 32)
		str++;
	return (str);
}

static char	ft_detect_no_number(char str)
{
	if ((str < 48 || str > 57))
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	unsigned int	number;
	int				signe;
	char			*tmp;

	if (*str == 0)
		return (0);
	tmp = str;
	number = 0;
	tmp = ft_skip_epmty_text(tmp);
	signe = 1;
	if (*tmp == 43 || *tmp == 45)
	{
		if (*tmp == 45)
			signe = -signe;
		tmp++;
	}
	while (*tmp && !ft_detect_no_number(*tmp))
	{
		number = number * 10 +(*tmp++) - 48;
	}
	return (signe * number);
}
