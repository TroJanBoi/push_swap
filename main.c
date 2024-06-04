/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:38:53 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/05/16 16:09:28 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_addtostack(t_stack **statck_a, char *str)
{
	t_stack	*new;
	int		i;
	char	**result;

	i = 0;
	result = ft_split(str, ' ');
	while (result[i])
	{
		new = ft_newstack(ft_atoi(result[i]));
		ft_lstadd_back(statck_a, new);
		i++;
	}
	ft_free(result);
}

static void	ft_check_sort(t_stack **stack_a, t_stack **stack_b, int size)
{
	if (size <= 2)
		sort_dool(stack_a);
	else if (size <= 3)
		sort_seht(stack_a);
	else if (size <= 4)
		sort_neht(stack_a, stack_b);
	else if (size <= 5)
		sort_dausut(stack_a, stack_b);
}

static void	ft_printstack(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp)
	{
		printf("%d\n", tmp->data);
		tmp = tmp->next;
	}
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*str;

	if (ac < 2)
		return (0);
	str = check_arg(av);
	stack_a = NULL;
	stack_b = NULL;
	ft_addtostack(&stack_a, str);
	free(str);
	ft_setindex(&stack_a);
	ft_printstack(&stack_a);
	ft_check_sort(&stack_a, &stack_b, ft_lstsize(stack_a));
	ft_printstack(&stack_a);
	ft_freestack(&stack_a);
	ft_freestack(&stack_b);
}
