/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:15:37 by vmkrtchy          #+#    #+#             */
/*   Updated: 2023/01/19 16:55:05 by vmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	number_len(long num)
{
	int	i;

	i = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		i++;
		num = (-num);
	}
	while (num != 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*zero(char *str)
{
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	i_to_a(long n)
{
	char	symb;

	symb = 0;
	symb = (n % 10) + 48;
	return (symb);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	long	n_;

	n_ = n;
	len = number_len(n_);
	result = malloc(sizeof(char) * (len + 1));
	result[len] = '\0';
	if (!result)
		return (NULL);
	if (n_ == 0)
		return (zero(result));
	if (n_ < 0)
	{
		result[0] = '-';
		n_ = n_ * (-1);
	}
	len--;
	while (n_ > 0)
	{
		result[len] = i_to_a(n_);
		n_ = n_ / 10;
		len--;
	}
	return (result);
}
