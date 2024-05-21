/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:43:50 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/05/16 16:05:39 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isalspace(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			count++;
		i++;
	}
	if (count == i)
		return (false);
	else
		return (true);
}

static int	ft_isalnum(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_check_op(str[i]) == false)
			break;
		i++;
	}
	if (i > 1)
		return (0);
	while (str[i])
	{
		if (ft_check_num(str[i]) == 1)
			i++;
		else if (ft_check_num(str[i]) == 0)
		 	return (0);
	}
	return (1);
}

static	int	check_overflow(char *str)
{
	if (ft_atoi(str) >= INT_MAX || ft_atoi(str) <= INT_MIN)
		return (0);
	return (1);
}

void	check_arg(char *str)
{

	if (ft_strlen(str) == 0 || ft_isalspace(str) == 0)
		ft_error();
    if (ft_isalnum(str) == 0)
		ft_error();
}
