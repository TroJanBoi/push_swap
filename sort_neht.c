/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_neht.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 23:51:08 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/06/03 23:51:08 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_neht(t_stack **stack_a, t_stack **stack_b)
{
	while (ft_lstsize(*stack_a) != 3)
	{
		if ((*stack_a)->index == 1)
			ft_push_b(stack_a, stack_b);
		ft_rotate_a(stack_a);
	}
	sort_seht(stack_a);
	ft_push_a(stack_a, stack_b);
}
