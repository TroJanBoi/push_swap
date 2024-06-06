/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_dausut.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 23:51:26 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/06/03 23:51:26 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sleeponly(t_stack **stack_a)
{
	int		i;
	int		size;
	t_stack	*tmp;

	i = 0;
	tmp = *stack_a;
	size = ft_lstsize(tmp);
	while (tmp)
	{
		if (tmp->index == 1 || tmp->index == 2)
			break;
		i++;
		tmp = tmp->next;
	}
	if (i < size / 2)
		ft_rotate_a(stack_a);
	else
		ft_rra(stack_a);
}

void	sort_dausut(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	while (size != 3)
	{
		if ((*stack_a)->index == 1 || (*stack_a)->index == 2)
			ft_push_b(stack_a, stack_b);
		ft_sleeponly(stack_a);
		size = ft_lstsize(*stack_a);
	}
	sort_seht(stack_a);
	sort_doolb(stack_b);
	ft_swap_b(stack_b);
	ft_push_a(stack_a, stack_b);
	ft_push_a(stack_a, stack_b);
}

// void	rest(t_stack *tmp, t_stack **a, int count, int size)
// {
// 	while (tmp)
// 	{
// 		if (tmp->index == 1 || tmp->index == 2)
// 			break ;
// 		count++;
// 		tmp = tmp->next;
// 	}
// 	if (count < size / 2)
// 		ft_ra(a);
// 	else
// 		ft_rra(a);
// }

// void	sort_dausut(t_stack **a, t_stack **b)
// {
// 	int		size;
// 	t_stack	*tmp;
// 	int		count;

// 	size = ft_khanad(*a);
// 	count = 0;
// 	while (size != 3)
// 	{
// 		if ((*a)->index == 1 || (*a)->index == 2)
// 			ft_pb(a, b);
// 		tmp = *a;
// 		count = 0;
// 		rest(tmp, a, count, size);
// 		size = ft_khanad(*a);
// 	}
// 	// ft_khanad_sam(a);
// 	// ft_khanad_songb(b);
// 	// ft_sb(b);
// 	// ft_pa(a, b);
// 	// ft_pa(a, b);
// 	sort_seht(a);
// 	sort_doolb(b);
// 	ft_swap_b(b);
// 	ft_push_a(stack_a, stack_b);
// 	ft_push_a(stack_a, stack_b);
// }