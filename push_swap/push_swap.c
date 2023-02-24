/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:16:01 by afatir            #+#    #+#             */
/*   Updated: 2023/02/24 15:37:08 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	v(void)
// {
// 	system("leaks push_swap");
// }


int	main(int ac, char **av)
{
	char	**p;
	int		i;
	int		*ar;
	t_stack	*a;
	t_stack	*b;
	t_stack	*tmp;
	t_stack	*tb;

// atexit(v);
	i = 0;
	if (ac <= 1)
		exit(1);
	p = ft_check1(ac, av);
	if (!ft_atoi_pro(p))
	{
		ft_printf("Error\n");
		exit(1);
	}
	while (p[i])
		i++;
	ar = ft_fill(p, i);
	a = ft_pusha(ar, i);
	index_a(&a);
	ft_position(&a);
	if (!is_sort_check(a))
		exit(1);
//A
	tmp = a;
	// ft_printf("----------------------------a\n");
	// while (tmp != NULL)
	// {
	// 	ft_printf("%d-->%d\n", tmp->data, tmp->index);
	// 	tmp = tmp->next;
	// }

	ft_push_a_to_b(&a, &b, ft_strlen_stack(&a)); //pb
//B 
	tb = b;
	// ft_printf("---------------------------b\n");
	// while (tb != NULL)
	// {
	// 	ft_printf("%d-->%d\n", tb->data, tb->index);
	// 	tb = tb->next;
	// }

	ft_bush_b_to_a(&a, &b); //pa
// A
	// ft_printf("---------------------------a\n");
	// while (a != NULL)
	// {
	// 	ft_printf("%d-->%d\n", a->data, a->index);
	// 	a = a->next;
	// }


	return (0);
}
