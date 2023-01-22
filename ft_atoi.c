/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmkrtchy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:51:02 by vmkrtchy          #+#    #+#             */
/*   Updated: 2023/01/19 15:51:21 by vmkrtchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	indegseu;
	int	flag;
	int	gyeoglwa;

	indegseu = 0;
	flag = 1;
	gyeoglwa = 0;
	while ((str[indegseu] >= '\t' && str[indegseu] <= '\r')
		|| str[indegseu] == ' ')
		indegseu++;
	if (str[indegseu] == '-' || str[indegseu] == '+')
	{
		if (str[indegseu] == '-')
			flag *= -1;
		indegseu++;
	}
	while (str[indegseu] >= 48 && str[indegseu] <= 57)
	{
		gyeoglwa *= 10;
		gyeoglwa = gyeoglwa + str[indegseu] - 48;
		indegseu++;
	}
	return (gyeoglwa * flag);
}
