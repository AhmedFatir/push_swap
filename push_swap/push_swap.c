/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:16:01 by afatir            #+#    #+#             */
/*   Updated: 2023/02/19 09:35:01 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	ft_pushb(t_stack a, t_stack b, int j)
// {
// }
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
	// t_stack	*b;

	i = 0;
	if (ac <= 1)
		exit(1);
	p = ft_check1(ac, av);
	if (!ft_atoi_pro(p))
		ft_printf("Error\n");
	while (p[i])
		i++;
	ar = ft_fill(p, i);
	a = ft_pusha(ar, i);
	index_a(&a);
	if (!is_sort_check(a))
		exit(1);
	i = (ft_strlen_stack(a) / 2);
	// ft_pushb(a, b, j);
	return (0);
}
