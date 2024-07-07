/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshaheen <mshaheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:25:31 by mshaheen          #+#    #+#             */
/*   Updated: 2024/06/26 14:54:05 by mshaheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int				i;
	int				sign;
	unsigned long	r;

	i = 0;
	r = 0;
	sign = 1;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		r = r * 10 + (s[i] - '0');
		if (sign == -1 && r >= LLONG_MAX)
			return (0);
		if (r >= LLONG_MAX)
			return (-1);
		i++;
	}
	return (r * sign);
}
