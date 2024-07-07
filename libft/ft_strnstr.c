/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshaheen <mshaheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:04:45 by mshaheen          #+#    #+#             */
/*   Updated: 2024/06/30 12:39:55 by mshaheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return ((char *)src);
	while (src[i] && i < len)
	{
		while (src[i + j] == to_find[j] && (i + j) < len)
		{
			j++;
			if (to_find[j] == '\0')
				return ((char *)&src[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
