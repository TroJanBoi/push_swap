/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:38:53 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/05/16 00:53:11 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
