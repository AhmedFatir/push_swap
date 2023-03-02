/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 09:40:58 by afatir            #+#    #+#             */
/*   Updated: 2023/03/02 10:31:14 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_s(t_stack **a, t_stack **b)
{
	if (ft_strlen_stack(a) == 2 && (*a)->index > (*a)->next->index)
		ft_swap(a, "sa");
	else if (ft_strlen_stack(a) == 3)
		sort_t(a);
	else if (ft_strlen_stack(a) == 4)
		sort_four(a, b);
	else if (ft_strlen_stack(a) == 5)
		sort_f(a, b);
}

void	sort_t(t_stack **s)
{
	t_stack	*a;
	t_stack	*b;
	t_stack	*c;

	a = *s;
	b = a->next;
	c = a->next->next;
	if (a->index > b->index && b->index < c->index && a->index < c->index)
		ft_swap(s, "sa");
	else if (a->index < b->index && b->index > c->index && a->index > c->index)
		ft_revrot(s, "rra");
	else if (a->index > b->index && b->index > c->index && a->index > c->index)
	{
		ft_rot(s, "ra");
		ft_swap(s, "sa");
	}
	else if (a->index < b->index && b->index > c->index && a->index < c->index)
	{
		ft_swap(s, "sa");
		ft_rot(s, "ra");
	}
	else if (a->index > b->index && b->index < c->index && a->index > c->index)
		ft_rot(s, "ra");
}

void	sort_f(t_stack **a, t_stack **b)
{
	int		i;
	int		mp;

	i = 2;
	while (i--)
	{
		m_p(a);
		mp = mp2(a);
		sort_f2(a, b, mp);
		if (mp == 4)
		{
			if (ft_strlen_stack(a) == 5)
				ft_revrot(a, "rra");
			ft_revrot(a, "rra");
			ft_push(a, b, "pb");
		}
		if (mp == 5)
		{
			ft_revrot(a, "rra");
			ft_push(a, b, "pb");
		}
	}
	sort_t(a);
	ft_push(b, a, "pa");
	ft_push(b, a, "pa");
}

void	sort_f2(t_stack **a, t_stack **b, int mp)
{
	if (mp == 1)
		ft_push(a, b, "pb");
	if (mp == 2)
	{
		ft_swap(a, "sa");
		ft_push(a, b, "pb");
	}
	if (mp == 3)
	{
		ft_rot(a, "ra");
		ft_swap(a, "sa");
		ft_push(a, b, "pb");
	}
}

void	sort_four(t_stack **a, t_stack **b)
{
	int		mp;

	m_p(a);
	mp = mp2(a);
	if (mp == 1)
		ft_push(a, b, "pb");
	else if (mp == 2)
	{
		ft_swap(a, "sa");
		ft_push(a, b, "pb");
	}
	else if (mp == 3)
	{
		ft_rot(a, "ra");
		ft_swap(a, "sa");
		ft_push(a, b, "pb");
	}
	else if (mp == 4)
	{
		ft_revrot(a, "rra");
		ft_push(a, b, "pb");
	}
	sort_t(a);
	ft_push(b, a, "pa");
}
