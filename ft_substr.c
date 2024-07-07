/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshaheen <mshaheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 07:32:23 by mshaheen          #+#    #+#             */
/*   Updated: 2024/06/30 12:47:35 by mshaheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ns;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
	{
		ns = (char *)malloc(1);
		if (ns)
			ns[0] = '\0';
		return (ns);
	}
	if (len > (unsigned int)ft_strlen(s) - start)
		len = (unsigned int)ft_strlen(s) - start;
	ns = (char *)malloc(sizeof(*s) * (len + 1));
	if (!ns)
		return (NULL);
	while (i < len)
	{
		ns[i] = s[start + i];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
