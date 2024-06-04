/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:03:01 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/05/13 14:44:37 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack **stack)
{
	t_stack	*tmp;
	int		num;

	tmp = *stack;
	if (!stack || tmp->next == NULL)
		return ;
	num = tmp->data;
	tmp->data = tmp->next->data;
	tmp->next->data = num;
}

void	ft_swap_a(t_stack **stack_a)
{
	ft_swap(stack_a);
	ft_putstr("sa\n");
}

void	ft_swap_b(t_stack **stack_b)
{
	ft_swap(stack_b);
	ft_putstr("sb\n");
}

void	ft_swap_both(t_stack **stack_a, t_stack **stack_b)
{
	ft_swap_a(stack_a);
	ft_swap_b(stack_b);
	ft_putstr("ss\n");
}
