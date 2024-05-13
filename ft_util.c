/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:04:20 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/05/13 23:22:41 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
static int	sign_overflow(long s)
{
	if (s > 0)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	long	s;
	long	ret;

	i = 0;
	s = 1;
	ret = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
		{
			s *= -1;
		}
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		ret = (ret * 10) + (nptr[i] - 48);
		i++;
		if (ret < 0)
			return (sign_overflow(s));
	}
	return (ret * s);
}