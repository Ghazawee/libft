/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshaheen <mshaheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 11:04:58 by mshaheen          #+#    #+#             */
/*   Updated: 2024/06/30 17:51:29 by mshaheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*nob;

	if (!lst || !f)
		return (NULL);
	nlst = NULL;
	while (lst)
	{
		nob = malloc(sizeof(t_list));
		if (!nob)
		{
			ft_lstclear(&nlst, (*del));
			return (NULL);
		}
		nob->content = f(lst->content);
		nob->next = NULL;
		ft_lstadd_back(&nlst, nob);
		lst = lst->next;
	}
	return (nlst);
}
