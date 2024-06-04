/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_seht.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 23:46:12 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/06/03 23:46:12 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_value(int *hana, int *dool, int *seht, t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	*hana = tmp->index;
	*dool = tmp->next->index;
	*seht = tmp->next->next->index;
}

void	sort_seht(t_stack **stack_a)
{
	int		hana;
	int		dool;
	int		seht;

	set_value(&hana, &dool, &seht, stack_a);
	if (hana > dool && seht > hana)
		ft_swap_a(stack_a);
	else if (hana > dool && dool > seht)
	{
		ft_swap_a(stack_a);
		ft_rra(stack_a);
	}
	else if (seht > dool && hana > seht)
		ft_rotate_a(stack_a);
	else if (seht > hana && dool > seht)
	{
		ft_swap_a(stack_a);
		ft_rotate_a(stack_a);
	}
	else if (seht < dool && hana < dool)
		ft_rra(stack_a);
}
