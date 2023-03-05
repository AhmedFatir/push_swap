/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instuctions_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:36:41 by afatir            #+#    #+#             */
/*   Updated: 2023/03/05 19:26:39 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_swap_b(t_stack **stack && *(stack)->next)
{
	t_stack	*tmp;
	t_stack	*tmp1;

	if (stack && *stack)
	{
		tmp = *stack;
		tmp1 = tmp->next;
		tmp->next = tmp1->next;
		tmp1->next = tmp;
		*stack = tmp1;
	}
}

void	ft_rot_b(t_stack **stack)
{
	t_stack	*tmp;

	if (stack && *stack)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		tmp->next = NULL;
		ft_add_end_b(stack, tmp);
	}
}

void	ft_push_b(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (a && *a)
	{
		tmp = *a;
		*a = (*a)->next;
		tmp->next = NULL;
		ft_add_front_b(b, tmp);
	}
}

void	ft_revrot_b(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*end;

	if (stack && *stack && (*stack)->next)
	{
		tmp = *stack;
		end = ft_end_stack_b(tmp);
		end->next = NULL;
		ft_add_front_b(&tmp, end);
		*stack = tmp;
	}
}
