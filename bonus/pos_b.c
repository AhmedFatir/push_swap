/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos_b.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 23:00:10 by afatir            #+#    #+#             */
/*   Updated: 2023/02/27 17:44:37 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_position_b(t_stack **b)
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
		return (tmp->pos);
	}
	return (0);
}

int	check_empty_b(t_stack **b)
{
	if (b && *b)
		return (0);
	return (1);
}

int	ft_aplic_b(t_stack **a, t_stack **b, char *inst)
{
	if (ft_strcmp(inst, "sa\n") == 0 || ft_strcmp(inst, "ss\n") == 0)
		norm_inst_b(a, b, inst, 1);
	else if (ft_strcmp(inst, "ra\n") == 0 || ft_strcmp(inst, "rr\n") == 0)
		norm_inst_b(a, b, inst, 2);
	else if (ft_strcmp(inst, "rra\n") == 0)
		ft_revrot_b(a);
	else if (ft_strcmp(inst, "pa\n") == 0)
		ft_push_b(b, a);
	else if (ft_strcmp(inst, "sb\n") == 0)
		ft_swap_b(b);
	else if (ft_strcmp(inst, "rb\n") == 0)
		ft_rot_b(b);
	else if (ft_strcmp(inst, "rrb\n") == 0)
		ft_revrot_b(b);
	else if (ft_strcmp(inst, "pb\n") == 0)
		ft_push_b(a, b);
	else if (ft_strcmp(inst, "rrr\n") == 0)
	{
		ft_revrot_b(a);
		ft_revrot_b(b);
	}
	else
		return (0);
	return (1);
}

void	norm_inst_b(t_stack **a, t_stack **b, char *inst, int i)
{
	if (i == 1)
	{
		if (ft_strcmp(inst, "sa\n") == 0)
			ft_swap_b(a);
		else
		{
			ft_swap_b(a);
			ft_swap_b(b);
		}
	}
	if (i == 2)
	{
		if (ft_strcmp(inst, "ra\n") == 0)
			ft_rot_b(a);
		else
		{
			ft_rot_b(a);
			ft_rot_b(b);
		}
	}
}
