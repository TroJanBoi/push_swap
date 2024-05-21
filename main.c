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

// ./push_swap "123123123           2""3" "" 44445 123456789 

int	main(int ac, char **av)
{
	// t_stack	*stack_a;
	// t_stack	*stack_b;
	int		i;
	char	*str;

	i = 1;
	if (ac < 2)
		return (0);
	str = malloc(sizeof(char *) * ft_strlen(*av));
	if (!str)
		return (0);
	while (av[i])
	{
		check_arg(av[i]);
		i++;
	}
	
	free(str);
		// str = ft_strjoin(str, " ");
		// str = ft_strjoin(str, av[i]);
	
}

// int	main()
// {
// 	const char	*str = "-2147483647";

// 	// printf("INT_MAX : %d\n", INT_MAX);
// 	// printf("%d\n", atoi(str));
// 	// if (atoi(str) >= INT_MAX || atoi(str) <= INT_MIN)
// 	// 	printf("Error\n");
// 	printf("%d\n", 0005);
// 	// printf("INT_MIN : %d\n", INT_MIN); // -2147483648
// 	// printf("INT_MAX : %d\n", INT_MAX); // 2147483647 	
// 	// printf("ft_atoi : %d\n", ft_atoi(str));
// 	// printf("ft_atoi : %d\n", ft_atoi(str));
// 	// if (ft_atoi(str) > INT_MIN)
// 	// 	printf("Error\n");
// }