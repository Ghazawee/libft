/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshaheen <mshaheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 08:20:58 by mshaheen          #+#    #+#             */
/*   Updated: 2024/06/26 12:43:39 by mshaheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*so;
	unsigned char	k;
	size_t			i;

	so = (unsigned char *)s;
	k = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (so[i] == k)
			return ((void *)&so[i]);
		i++;
	}
	return (NULL);
}
