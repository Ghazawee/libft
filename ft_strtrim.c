/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshaheen <mshaheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 09:00:49 by mshaheen          #+#    #+#             */
/*   Updated: 2024/06/30 12:32:19 by mshaheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*ns;

	i = 0;
	j = ft_strlen(s1);
	ns = 0;
	if (s1 != 0 && set != 0)
	{
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		ns = (char *)malloc(j - i + 1);
		if (!ns)
			return (NULL);
		ft_strlcpy(ns, &s1[i], j - i + 1);
	}
	return (ns);
}
