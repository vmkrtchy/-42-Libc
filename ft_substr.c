/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:49:39 by vmkrtchy          #+#    #+#             */
/*   Updated: 2023/01/19 15:49:49 by vmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tmp;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen (s))
		len = ft_strlen(s);
	tmp = malloc(len + 1);
	if (tmp == NULL)
		return (NULL);
	ft_strlcpy (tmp, s + start, len + 1);
	return (tmp);
}
/*#include <stdio.h>
int main()
{
	char *str = "lorem ipsum dolor sit amet";
	char *box;
	box = ft_substr(str,400,20);
	printf("string is ----- %s",box);
}*/

/*
int main() {
#ifdef __unix__
	printf("!!!\n");
#endif
#ifdef __APPLE__
	printf("???\n");
#endif
}
*/
