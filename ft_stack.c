/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:23:13 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/05/07 19:40:57 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_newstack(int	head)
{
	t_stack	*tmp;

	tmp = malloc(sizeof(*tmp));
	if (!tmp)
		return (0);
	tmp->data = head;
	tmp->next = NULL;
	return (tmp);
}

void	ft_addstack(t_stack **head, t_stack *next)
{
	if (!head || !next)
		return ;
	next->next = *head;
	*head = next;
}

t_stack	*ft_lstlast(t_stack *stack)
{
	if (!stack)
		return (0);
	while (stack->next)
		stack = stack->next;
	return (stack);
}
