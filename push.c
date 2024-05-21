/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:32:18 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/05/13 14:44:26 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_stack **first, t_stack **second)
{
	t_stack	*tmp;

	if (!first)
		return ;
	tmp = (*first)->next;
	(*first)->next = *second;
	*second = *first;
	*first = tmp;
}

void	ft_push_a(t_stack **stack_a, t_stack **stack_b)
{
	ft_push(stack_a, stack_b);
	ft_putstr("pa\n");
}

void	ft_push_b(t_stack **stack_b, t_stack **stack_a)
{
	ft_push(stack_b, stack_a);
	ft_putstr("pb\n");
}