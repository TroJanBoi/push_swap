/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 18:16:49 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/05/25 18:16:49 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_alljoin(char **av)
{
	char	*str;
	int		i;
	int		c;
	
	c = 1;
	i = 1;
	while (av[c])
		c++;
	printf("len : %d\n", c);
	str = malloc(sizeof(char *) * c);
	if (!str)
		return (0);
	str = ft_strjoin(str, "");
	while (av[i])
	{
		str = ft_strjoin(str, av[i]);
		str = ft_strjoin(str, " ");
		i++;
	}
	return (str);
}

void	ft_freestack(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*new;

	new = *stack;
	while (new)
	{
		tmp = new;
		new = new->next;
		free(tmp);
	}
	free(stack);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}
