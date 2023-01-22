/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:21:02 by vmkrtchy          #+#    #+#             */
/*   Updated: 2023/01/19 16:59:45 by vmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*a;

	a = *lst;
	while (*lst != NULL)
	{
		(a) = (*lst)->next;
		ft_lstdelone (*lst, del);
		(*lst) = a;
	}
}
