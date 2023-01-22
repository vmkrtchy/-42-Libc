/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:17:15 by vmkrtchy          #+#    #+#             */
/*   Updated: 2023/01/19 17:17:17 by vmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	char		*dest;
	const char	*source;
	size_t		n;
	size_t		dlen;

	n = siz;
	source = src;
	dest = dst;
	while (n-- != 0 && *dest != '\0')
		dest++;
	dlen = dest - dst;
	n = siz - dlen;
	if (n == 0)
		return (dlen + ft_strlen(source));
	while (*source != '\0')
	{
		if (n != 1)
		{
			*dest++ = *source;
			n--;
		}
		source++;
	}
	*dest = '\0';
	return (dlen + (source - src));
}
