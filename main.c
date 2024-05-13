/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:38:53 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/05/13 23:36:41 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// ./push_swap "" "" 1 2 3 fail

// ./push_swap "123123123           2""3" "" 44445 123456789
int	main(int ac, char **av)
{
	// t_stack	*stack_a;
	// t_stack	*stack_b;
	int	i;

	i = 1;
	if (ac < 2)
		return (0);
	while (av[i])
	{
		int len;

		len = 0;
		while (av[i][len])
		{
			len++;
			isAllNum(&av[i][len]);
		}
		// if (isAllNum(av[i]) == false)
		// 	return ("Error");
		// printf("{%s} len = [%d]\n", av[i], len);
		i++;
	}

}