/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 14:54:43 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/06/02 14:54:43 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_index(t_stack **stack, int num)
{
	t_stack	*tmp;
	int	count;

	count = 1;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->data < num)
			count++;
		tmp = tmp->next;
	}
	return (count);
}

void	ft_setindex(t_stack **stack)
{
	t_stack	*tmp;
	int		i;
	int		size;

	i = 0;
	size = ft_lstsize(*stack);
	tmp = *stack;
	while (tmp && i < size)
	{
		tmp->index = ft_index(stack, tmp->data);
		tmp = tmp->next;
	}
}