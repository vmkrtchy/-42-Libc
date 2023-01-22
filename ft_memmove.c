/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:12:16 by vmkrtchy          #+#    #+#             */
/*   Updated: 2023/01/19 17:12:21 by vmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*char_src;
	char	*char_dest;

	char_src = (char *)src;
	char_dest = (char *)dest;
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			char_dest[n] = char_src[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
