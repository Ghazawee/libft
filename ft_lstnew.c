/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshaheen <mshaheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 10:09:14 by mshaheen          #+#    #+#             */
/*   Updated: 2024/06/30 13:17:14 by mshaheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nelem;

	nelem = malloc(sizeof(t_list));
	if (!nelem)
		return (NULL);
	nelem->content = content;
	nelem->next = NULL;
	return (nelem);
}
