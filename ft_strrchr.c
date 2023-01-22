/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:43:09 by vmkrtchy          #+#    #+#             */
/*   Updated: 2023/01/19 17:43:27 by vmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*box;

	box = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			box = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	if (box)
		return (box);
	else
		return (NULL);
	if (c == 0)
		return ((char *)s);
	if (*s == '0')
		return (NULL);
	return (NULL);
}
