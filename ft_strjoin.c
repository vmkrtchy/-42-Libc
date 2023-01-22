/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:16:58 by vmkrtchy          #+#    #+#             */
/*   Updated: 2023/01/19 17:17:02 by vmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len;
	char		*concatenat;
	size_t		i;
	size_t		j;

	j = 0;
	i = 0;
	len = ft_strlen (s1) + ft_strlen (s2) + 1;
	concatenat = malloc (sizeof (char) * len);
	while (s1[i] != '\0')
	{
		concatenat[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		concatenat[i] = s2[j];
		i++;
		j++;
	}
	concatenat[i] = '\0';
	return (concatenat);
}
