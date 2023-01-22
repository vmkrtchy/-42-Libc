/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:15:10 by vmkrtchy          #+#    #+#             */
/*   Updated: 2023/01/19 17:15:38 by vmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_delimiter(char const *s, char c)
{
	int	i;
	int	count;
	int	flag;

	i = 0;
	flag = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
	}
	return (count);
}

int	l_substring(char const *s, char c, int i)
{
	int	count;

	count = 0;
	while (s[i] && s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

char	*wordcpy(char const *s, char c, int *i, int len)
{
	int		j;
	char	*word;

	j = 0;
	word = malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	while (s[*i] && s[*i] != c)
	{
		word[j] = s[*i];
		j++;
		*i += 1;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**string;
	int		i;
	int		j;

	i = 0;
	j = 0;
	string = malloc(sizeof(char *) * (count_delimiter(s, c) + 1));
	if (string == NULL)
		return (NULL);
	while (i < (int)ft_strlen(s))
	{
		if (s[i] != c)
		{
			string[j] = wordcpy(s, c, &i, l_substring(s, c, i) + 1);
			j++;
		}
		if (!s[i])
			break ;
		i++;
	}
	string[j] = NULL;
	return (string);
}
