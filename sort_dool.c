/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_dool.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 23:44:51 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/06/03 23:44:51 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_dool(t_stack **stack_a)
{
	t_stack	*tmp_a;

	tmp_a = *stack_a;
	if (tmp_a->data > tmp_a->next->data)
		ft_swap_a(stack_a);
}
