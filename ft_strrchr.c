/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshaheen <mshaheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 09:03:12 by mshaheen          #+#    #+#             */
/*   Updated: 2024/06/30 12:37:41 by mshaheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	char			*st;
	int				i;

	ch = (unsigned char)c;
	st = (char *)s;
	i = ft_strlen(s);
	if (ch == '\0')
		return (&st[i]);
	while (i >= 0)
	{
		if (st[i] == ch)
			return (&st[i]);
		i--;
	}
	return (NULL);
}
