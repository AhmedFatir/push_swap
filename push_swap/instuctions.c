/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instuctions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:36:41 by afatir            #+#    #+#             */
/*   Updated: 2023/02/24 14:36:00 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack **stack, char *s)
{
	t_stack	*tmp;
	t_stack	*tmp1;
// (void)s;
	if (stack != NULL)
	{
		tmp = *stack;
		tmp1 = tmp->next;
		tmp->next = tmp1->next;
		tmp1->next = tmp;
		*stack = tmp1;
		ft_printf("%s\n", s);
	}
}
void	ft_push(t_stack **a, t_stack **b, char *s)
{
	t_stack	*tmp;
// (void)s;
	if (a != NULL)
	{
		tmp = *a;
		*a = (*a)->next;
		tmp->next = NULL;
		ft_add_front(b, tmp);
		ft_printf("%s\n", s);
	}
}

void	ft_rot(t_stack **stack, char *s)
{
	t_stack	*tmp;
// (void)s;
	if (stack != NULL)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		tmp->next = NULL;
		ft_add_end(stack, tmp);
		ft_printf("%s\n", s);
	}
}

void	ft_revrot(t_stack **stack, char *s)
{
	t_stack	*tmp;
	t_stack	*end;
// (void)s;
	if (stack && *stack && (*stack)->next)
	{
		tmp = *stack;
		end = ft_end_stack(tmp);
		end->next = NULL;
		ft_add_front(&tmp, end);
		*stack = tmp;
		ft_printf("%s\n", s);
	}
}
