/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:39:02 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/05/13 23:23:06 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}					t_stack;

t_stack	*ft_newstack(int	head);
void	ft_addstack(t_stack **head, t_stack *next);
void	ft_putstr(char *str);

/*Check Input*/
int		isAllNum(char *str);
int		ft_atoi(const char *nptr);

/*Push Stack*/
void	ft_push(t_stack **first, t_stack **second);
void	ft_push_a(t_stack **stack_a, t_stack **stack_b);
void	ft_push_b(t_stack **stack_b, t_stack **stack_a);

/*Swap Stack*/
void	ft_swap(t_stack *src);
void	ft_swap_a(t_stack *stack_a);
void	ft_swap_both(t_stack *stack_a, t_stack *stack_b);

/*Rotate Stack*/
t_stack	*ft_lstlast(t_stack *stack);
void	ft_rotate(t_stack **stack_a);
void	ft_rotate_a(t_stack **stack_a);
void	ft_rotate_b(t_stack **stack_b);
void	ft_rotate_both(t_stack **stack_a, t_stack **stack_b);

/*Rotate Reverse Stack*/
void	ft_r_reverse(t_stack **stack);
void	ft_rra(t_stack **stack_a);
void	ft_rrb(t_stack **stack_b);
void	ft_rrr(t_stack **stack_a, t_stack **stack_b);

#endif