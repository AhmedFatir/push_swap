/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 01:25:27 by afatir            #+#    #+#             */
/*   Updated: 2023/02/27 12:35:52 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_stack	*ft_cr_stack_b(int i)
{
	t_stack	*s;

	s = (t_stack *)malloc(sizeof(t_stack));
	if (!s)
		return (NULL);
	s->next = NULL;
	s->data = i;
	s->index = 0;
	s->pos = 0;
	return (s);
}

void	ft_add_end_b(t_stack **a, t_stack *n)
{
	t_stack	*tmp;

	tmp = *a;
	if (*a == NULL)
	{
		*a = n;
		return ;
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = n;
}

void	ft_add_front_b(t_stack **a, t_stack *n)
{
	if (a && n)
	{
		if (*a)
			n->next = *a;
		*a = n;
	}
}

int	ft_strlen_stack_b(t_stack **a)
{
	t_stack	*tmp;
	int		ln;

	ln = 0;
	tmp = *a;
	while (tmp != NULL)
	{
		ln++;
		tmp = tmp->next;
	}
	return (ln);
}

t_stack	*ft_end_stack_b(t_stack *s)
{
	t_stack		*t;

	if (s)
	{
		t = s;
		while (s->next->next != NULL)
			s = s->next;
		t = s->next;
		s->next = NULL;
		return (t);
	}
	return (NULL);
}
