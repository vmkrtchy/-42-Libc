/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:12:02 by vmkrtchy          #+#    #+#             */
/*   Updated: 2023/01/19 17:12:06 by vmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*str;
	char			*str1;

	str = (char *)dst;
	str1 = (char *)src;
	i = 0;
	if (!src && !dst)
		return (NULL);
	while (i < n)
	{
		str[i] = str1[i];
		i++;
		dst++;
	}
	return (dst - n);
}
