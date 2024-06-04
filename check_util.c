/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_util.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:57:10 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/05/16 15:57:40 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_num(char c)
{
	return (c >= '0' && c <= '9');
}

int	check_op(char c)
{
	return (c == '+' || c == '-');
}

int	check_overflow(char *str)
{
	if (ft_atol(str) > INT_MAX || ft_atol(str) < INT_MIN)
		return (0);
	return (1);
}

int	check_sort(char *str)
{
	int		i;
	int		j;
	char	**result;

	i = 0;
	result = ft_split(str, ' ');
	while (result[i])
	{
		j = i + 1;
		while (result[j])
		{
			if (ft_atoi(result[i]) > ft_atoi(result[j]))
				return (0);
			j++;
		}
		i++;
	}
	ft_free(result);
	return (1);
}
