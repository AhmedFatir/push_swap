/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 03:35:09 by afatir            #+#    #+#             */
/*   Updated: 2023/02/27 17:50:36 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_dob(char **p)
{
	int		i;
	int		j;

	i = 0;
	while (p[i])
	{
		j = i + 1;
		while (p[j])
		{
			if (ft_atoi(p[i]) == ft_atoi(p[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	*ft_fill(char **p, int i)
{
	int		*ar;
	int		j;

	j = 0;
	ar = malloc((i + 1) * sizeof(int));
	if (!ar)
		return (0);
	while (j < i)
	{
		ar[j] = ft_atoi(p[j]);
		j++;
	}
	ar[j] = 0;
	ft_free_all(p);
	return (ar);
}

t_stack	*ft_pusha(int *ar, int i)
{
	int		j;
	t_stack	*tmp;
	t_stack	*a;

	a = NULL;
	tmp = NULL;
	j = 0;
	while (j < i)
	{
		tmp = ft_cr_stack(ar[j]);
		ft_add_end(&a, tmp);
		j++;
	}
	free(ar);
	index_a(&a);
	ft_position(&a);
	return (a);
}

void	index_a(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*tmp1;
	int		i;

	if (a && *a)
	{
		i = 0;
		tmp = *a;
		tmp1 = *a;
		while (tmp1)
		{
			i = 0;
			tmp = *a;
			while (tmp)
			{
				if (tmp1->data > tmp->data)
					i++;
				tmp = tmp->next;
			}
			tmp1->index = i;
			tmp1 = tmp1->next;
		}
	}
}

void	is_sort_check(t_stack *a)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	if (a && a->next)
	{
		while (a->next)
		{
			tmp = a;
			a = a->next;
			if (tmp->data > a->data)
				i++;
		}
	}
	if (i == 0)
	{
		free_list(a);
		exit(1);
	}
}
