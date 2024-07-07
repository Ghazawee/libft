/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshaheen <mshaheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:39:42 by mshaheen          #+#    #+#             */
/*   Updated: 2024/06/25 15:48:01 by mshaheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*s;
	unsigned int	i;

	if (size && count > (SIZE_MAX / size))
		return (NULL);
	i = count * size;
	s = malloc(i);
	if (!s)
		return (NULL);
	ft_memset(s, 0, i);
	return (s);
}
