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
	t_stack	*tmp;
	int		size;
	int		i;
	int		j = 0;

	i = 0;
	size = ft_lstsize(*stack_a);
	while (j < 1)
	{
		while (i < size)
		{
			tmp = *stack_a;
			while (tmp)
			{
				printf("number : |%d| --> ", (tmp->index >> i) % 2);
				if ((tmp->index >> i) % 2 == 1)
					ft_rotate_a(stack_a);
				else
					ft_push_b(stack_a, stack_b);
				tmp = tmp->next;
			}
			printf("\n");
			i++;
		}
		j++;
	}
	while (ft_lstsize(*stack_b) != 0)
		ft_push_a(stack_a, stack_b);
	ft_printfstack(stack_a);
}