/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:52:07 by vmkrtchy          #+#    #+#             */
/*   Updated: 2023/01/22 01:16:49 by vmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*box;
	t_list	*map;

	map = NULL;
	if (!lst)
		return (NULL);
	while (lst != NULL)
	{
		box = ft_lstnew(f(lst->content));
		if (box == NULL)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&map, box);
		lst = lst->next;
	}
	return (map);
}
