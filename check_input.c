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
	while (str[i] != '\0')
	{
		if (check_num(str[i]) == 1)
		{
			i++;
			if (check_op(str[i]) == 1)
				return (0);
		}
		else if (check_op(str[i]) == 1)
		{
			i++;
			if (check_op(str[i]) == 1 || str[i] == ' ' || check_num(str[i]) == 0)
				return (0);
		}
		else if (str[i] == ' ')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

int	ft_checkdup(char *str)
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
			if (ft_atoi(result[i]) == ft_atoi(result[j]))
			{
				free(str);
				ft_free(result);
				result = NULL;
				return (0);
			}
			j++;
		}
		i++;
	}
	ft_free(result);
	result = NULL;
	return (1);
}

char	*check_arg(char **av)
{
	int		i;
	char	*str;

	i = 1;
	while (av[i])
	{
		if (ft_strlen(av[i]) == 0 || ft_isalspace(av[i]) == 0)
			ft_error();
		else if (ft_isalnum(av[i]) == 0 || check_overflow(av[i]) == 0)
			ft_error();
		i++;
	}
	str = ft_alljoin(av);
	if (ft_checkdup(str) == 0)
		ft_error();
	if (check_sort(str) == 1)
	{
		exit(EXIT_SUCCESS);
	}
	return (str);
}
