/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshaheen <mshaheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 07:55:02 by mshaheen          #+#    #+#             */
/*   Updated: 2024/06/30 12:37:13 by mshaheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		count++;
	}
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*res;
	unsigned int	nbr;
	unsigned int	len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_numlen(n);
	nbr = n;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nbr == 0)
		res[0] = '0';
	if (n < 0)
	{
		nbr *= -1;
		res[0] = '-';
	}
	while (nbr != 0)
	{
		res[--len] = ((nbr % 10) + '0');
		nbr /= 10;
	}
	return (res);
}
