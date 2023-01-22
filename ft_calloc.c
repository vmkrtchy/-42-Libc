/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:07:37 by vmkrtchy          #+#    #+#             */
/*   Updated: 2023/01/21 22:38:45 by vmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*i;

	if (count == SIZE_MAX || size == SIZE_MAX || size * count == SIZE_MAX)
		return (NULL);
	i = malloc(count * size);
	if (i == NULL)
		return (NULL);
	ft_bzero(i, count * size);
	return (i);
}
