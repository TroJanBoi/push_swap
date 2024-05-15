/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:43:50 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/05/16 01:22:30 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_count_operater(char	*str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		count++;
		i++;
	}
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			count++;
		i++;
	}
	return(count);
}

static int	ft_isalspace(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while(str[i])
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

static int	isAllNum(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return(1);
}

void	check_arg(char *str)
{
	if (ft_strlen(str) == 0 || ft_strlen(str) > 10 || ft_isalspace(str) == 0)
		ft_error();
	else if (ft_count_operater(str) >= 2)
		ft_error();
	else if (isAllNum(str) == 0)
		printf("isAllnum\n");
}
