/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:00:10 by afatir            #+#    #+#             */
/*   Updated: 2023/02/24 16:10:59 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_position(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*tb;
	int		i;

	if (b && *b)
	{
		i = 1;
		tb = *b;
		tmp = *b;
		while (tb)
		{
			if (tb->index > tmp->index)
				tmp = tb;
			tb = tb->next;
		}
		return(tmp->pos);
	}
	return (0);
}

void	ft_push_a_to_b(t_stack **a, t_stack **b, int range)
{	
	int		i;

	i = 0;
	if (range > 250)
		range = 42;
	else
		range = 15;
	while (ft_strlen_stack(a))
	{
		if ((*a)->index < i)
		{
			ft_push(a, b, "pb");
			i++;
		}
		else if((*a)->index <= i + range)
		{
			ft_push(a, b, "pb");
			ft_rot(b, "rb");
			i++;
		}
		else
			ft_rot(a, "ra");
	}
}
void	ft_bush_b_to_a(t_stack **a, t_stack **b)
{
	int		pm;
	int		ln;

	while (ft_strlen_stack(b))
	{
		m_p(b);
		pm = ft_position(b);
		ln = ft_strlen_stack(b);
		if(pm < ln / 2)
		{
			while (pm--)
				ft_rot(b, "rb");
			ft_push(b, a, "pa");
		}
		else
		{
			pm = ln - pm + 1;
			while (pm--)
				ft_revrot(b, "rrb");
			ft_push(b, a, "pa");
		}
	}
}
void	m_p(t_stack **b)
{
	t_stack	*tmp;
	int		max;

	max = 1;
	if (b)
	{
		tmp = *b;
		while (tmp)
		{
			tmp->pos = max;
			tmp = tmp->next;
			max++;
		}
		
	}
}