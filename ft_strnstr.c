/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:42:48 by vmkrtchy          #+#    #+#             */
/*   Updated: 2023/01/22 17:43:08 by vmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (!haystack)
		return (NULL);
	if (!needle || *needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == *needle && i + ft_strlen(needle) <= len)
		{
			if (!ft_strncmp(haystack + i, needle, ft_strlen(needle)))
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}
