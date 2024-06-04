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

static void	ft_printfstack(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp)
	{
		printf("%d\n", tmp->index);
		tmp = tmp->next;
	}
}

void	ft_radix(t_stack **stack_a, t_stack **stack_b)
{
	// ft_printfstack(stack_a);
	printf("%d\n", (*stack_a)->index % 2);
	printf("%d\n", ((*stack_a)->index >> 1) % 2);
}