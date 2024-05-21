/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:05:16 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/05/13 14:44:31 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_r_reverse(t_stack **stack)
{
	t_stack	*last;
	t_stack	*top;
	t_stack	*before_last;

	before_last = *stack;
	while (before_last->next != NULL && before_last->next->next != NULL)
		before_last = before_last->next;
	top = (*stack);
	last = ft_lstlast(*stack);
	(*stack) = last;
	before_last->next = NULL;
	last->next = top;
}

void	ft_rra(t_stack **stack_a)
{
	ft_r_reverse(stack_a);
	ft_putstr("rra\n");
}
void	ft_rrb(t_stack **stack_b)
{
	ft_r_reverse(stack_b);
	ft_putstr("rrb\n");
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rra(stack_a);
	ft_rrb(stack_b);
	ft_putstr("rrr\n");
}