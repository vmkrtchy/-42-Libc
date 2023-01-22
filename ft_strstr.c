/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:43:41 by vmkrtchy          #+#    #+#             */
/*   Updated: 2023/01/19 17:43:50 by vmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle || !haystack || !needle[0] || !haystack[0])
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j])
			{
				j++;
				if (needle[j] == '\0')
					return (&((char *)haystack)[i]);
			}
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>


int main () {
   const char haystack[] = "lorem ipsum dolor sit amet";
   const char needle[] = "ipsumm";
   char *ret;

   ret = ft_strstr(haystack, needle);

   printf("The substring is: %s\n", ret);

   return(0);
}
*/
