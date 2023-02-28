/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:16:01 by afatir            #+#    #+#             */
/*   Updated: 2023/02/27 17:44:01 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_stack *a)
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

void	ft_push_swap(t_stack **a, t_stack **b, int r)
{
	ft_push_a_to_b(a, b, r);
	ft_bush_b_to_a(a, b);
}

void	v(void)
{
	system("leaks push_swap");
}

int	main(int ac, char **av)
{
	char	**p;
	int		r;
	int		*ar;
	t_stack	*a;
	t_stack	*b;

	r = 0;
	p = ft_check1(ac, av);
	if (!ft_atoi_pro(p, &r))
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	ar = ft_fill(p, r);
	a = ft_pusha(ar, r);
	is_sort_check(a);
	r = ft_strlen_stack(&a);
	if (r == 5 || r == 3 || r == 2)
		ft_sort_s(&a, &b);
	else
		ft_push_swap(&a, &b, r);
	free_list(a);
	free_list(b);
	return (0);
}
