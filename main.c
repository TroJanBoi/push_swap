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

// // error_input
// ./checker_Mac ""                    // 1 empty arg
// ./checker_Mac "     "               // 1 empty arg
// ./checker_Mac 2 "" 4 3              // has empty arg
// ./checker_Mac 2 "     " 4 3         // has empty arg
// ./checker_Mac 2 4 3a                // has non-number
// ./checker_Mac 4+2 5 1               // has non-number
// ./checker_Mac 4,2 5 1               // has non-number
// ./checker_Mac 2 4 ++3               // has non-number
// ./checker_Mac 2 4 +-0               // has non-number
// ./checker_Mac 2147483648 12 1 5     // has overflow integer
// ./checker_Mac -2147483649 12 1 5    // has overflow integer
// ./checker_Mac 42 000042 5 1         // has duplicate number
// ./checker_Mac -5 2 -00005 7         // has duplicate number

// // ok_input
// ./checker_Mac 4 +2 5 1
// ./checker_Mac "4" +2 5 "1"
// ./checker_Mac "  4  " " +2 " "5    1"
// ./checker_Mac 42 "1 7" 9 "  25   10 "
// ./checker_Mac 00000 +0002 -2222 "+0000009     -000009"
// ./checker_Mac 2147483647 "-2147483648 00000000000000000000000001 +002 -002"

// ./push_swap "" "" 1 2 3 fail

// ./push_swap "123123123           2""3" "" 44445 123456789 fail

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

static void ft_check_sort(t_stack **stack_a, t_stack **stack_b, int size)
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
	dprintf(2, "check arg done -> [%s]\n", str);
	stack_a = NULL;
	stack_b = NULL;

	ft_addtostack(&stack_a, str);
	dprintf(2, "add st done \n");
	free(str);
	ft_setindex(&stack_a);
	// ft_printstack(stack_a);
	ft_check_sort(&stack_a, &stack_b, ft_lstsize(stack_a));
	// ft_printstack(stack_a);
	ft_freestack(&stack_a);
	ft_freestack(&stack_b);

}

/*Add into stack_a*/

// while (result[i])
// {
// 	dprintf(2, ">>>>>>> %d\n", ft_atoi(result[i]));
// 	tmp = ft_newstack(ft_atoi(result[i]));
// 	ft_addstack(stack_a, tmp);
// 	i++;
// }
// t_stack *new;
// new = *stack_a;

// while (new->next)
// {
// 	printf("%d\n", new->data);
// 	new = new->next;
// }	

// int	main()
// {
// 	const char	*str = "             ";
// 	char		**result;

// 	// printf(">>>>> ");
// 	// printf("%s\n", **ft_split(str, ' '));
// 	// printf("INT_MAX : %d\n", INT_MAX);
// 	// printf("%d\n", atoi(str));
// 	// if (atoi(str) >= INT_MAX || atoi(str) <= INT_MIN)
// 	// 	printf("Error\n");
// 	// printf("%s\n", *result);
// 	// printf("INT_MIN : %d\n", INT_MIN); // -2147483648
// 	// printf("INT_MAX : %d\n", INT_MAX); // 2147483647 	
// 	// printf("ft_atoi : %d\n", ft_atoi(str));
// 	// printf("ft_atoi : %d\n", ft_atoi(str));
// 	// if (ft_atoi(str) > INT_MIN)
// 	// 	printf("Error\n");
// }