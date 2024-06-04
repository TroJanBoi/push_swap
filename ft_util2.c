/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 18:16:49 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/06/04 17:48:55 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <string.h>
#include <stdio.h>
char	*ft_alljoin(char **av)
{
	char	*str;
	int		i;
	int		c;
	char	*tmp;
	
	c = 1;
	i = 1;
	while (av[c])
		c++;
	// printf("len : %d\n", c);
	str = NULL;
	printf("before |%s|\n", str);
	str = ft_substr("",0,0);
	printf("after |%s|\n", str);
	while (av[i])
	{
		tmp = str;
		str = ft_strjoin(str, av[i]);
		free(tmp);
		tmp = str;
		str = ft_strjoin(str, " ");
		free(tmp);
		i++;
	}
	printf("end |%s|\n", str);
	return (str);
}

void	ft_freestack(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*new;

	new = *stack;
	while (new != NULL)
	{
		tmp = new;
		new = new->next;
		free(tmp);
	}
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
	{
		dprintf(2, "free the [%s]\n", str[i]);
		free(str[i]);
		i++;
	}
	free(str);
}
