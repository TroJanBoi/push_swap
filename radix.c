/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 02:34:57 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/05/27 02:34:57 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_find_max(t_stack **stack)
{
	t_stack	*tmp;
	int		max;
	int		bits;

	bits = 0;
	tmp = *stack;
	max = tmp->index;
	while (tmp)
	{
		if (tmp->index > max)
			max = tmp->index;
		tmp = tmp->next;
	}
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

static void	ft_swingher(t_stack **stack_a, t_stack **stack_b)
{
	while (ft_lstsize(*stack_b) != 0)
		ft_push_a(stack_a, stack_b);
}

void	ft_radix(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	int		size;
	int		i;
	int		max;
	int		j;

	i = 0;
	tmp = *stack_a;
	size = ft_lstsize(tmp);
	max = ft_find_max(stack_a);
	while (i < max)
	{
		j = 0;
		while (j < size)
		{
			tmp = *stack_a;
			if (((tmp->index >> i) % 2) == 1)
				ft_rotate_a(stack_a);
			else
				ft_push_b(stack_a, stack_b);
			j++;
		}
		i++;
		ft_swingher(stack_a, stack_b);
	}
}
