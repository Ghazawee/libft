/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshaheen <mshaheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 08:48:03 by mshaheen          #+#    #+#             */
/*   Updated: 2024/06/25 09:00:38 by mshaheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	ch;
	char	*st;

	ch = (char)c;
	st = (char *)s;
	i = 0;
	while (st[i])
	{
		if (st[i] == ch)
			return (&st[i]);
		i++;
	}
	if (st[i] == ch)
		return (&st[i]);
	return (NULL);
}
