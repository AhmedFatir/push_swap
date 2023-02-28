/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:16:01 by afatir            #+#    #+#             */
/*   Updated: 2023/02/28 22:15:57 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	free_list_b(t_stack *a)
{
	t_stack	*tmp;
	t_stack	*tmp1;

	if (a)
	{
		tmp = a;
		while (tmp != NULL)
		{
			tmp1 = tmp->next;
			free(tmp);
			tmp = tmp1;
		}
	}
}

void	checker(t_stack **a, t_stack **b)
{
	char	*inst;

	inst = get_next_line(0);
	while (inst)
	{
		if (!ft_aplic_b(a, b, inst))
		{
			ft_printf("Error\n");
			return ;
		}
		free(inst);
		inst = get_next_line(0);
	}
	if (!is_sort_check_b(*a) && check_empty_b(b))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

void	v(void)
{
	system("leaks checker");
	atexit(v);
}

int	main(int ac, char **av)
{
	char	**p;
	int		r;
	int		*ar;
	t_stack	*a;
	t_stack	*b;

	r = 0;
	p = ft_check1_b(ac, av);
	if (!ft_atoi_pro_b(p, &r))
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	ar = ft_fill_b(p, r);
	a = ft_pusha_b(ar, r);
	index_a_b(&a);
	checker(&a, &b);
	free_list_b(a);
	free_list_b(b);
	return (0);
}
