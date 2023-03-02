/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:17:27 by afatir            #+#    #+#             */
/*   Updated: 2023/03/02 14:08:51 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft_gcl_ptf/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

typedef struct node
{
	int			data;
	int			index;
	int			pos;
	struct node	*next;
}t_stack;

// push_swap.c
void	free_list(t_stack *a);
void	ft_push_swap(t_stack **a, t_stack **b, int r);
// atoi_pro.c
char	**ft_check1(int ac, char **av);
int		ft_check2(char **str);
int		ft_atoi_pro(char **p, int *r);
size_t	ft_space(char *str);
int		ft_atoi_zero(char *p);
// linked_list.c
t_stack	*ft_cr_stack(int i);
void	ft_add_end(t_stack **a, t_stack *n);
void	ft_add_front(t_stack **a, t_stack *n);
int		ft_strlen_stack(t_stack **a);
t_stack	*ft_end_stack(t_stack *s);
// fill_index.c
int		ft_dob(char **p);
int		*ft_fill(char **p, int i);
t_stack	*ft_pusha(int *ar, int i);
void	index_a(t_stack **a);
void	is_sort_check(t_stack *a);
// instuctions.c
void	ft_swap(t_stack **stack, char *s);
void	ft_rot(t_stack **stack, char *s);
void	ft_push(t_stack **a, t_stack **b, char *s);
void	ft_revrot(t_stack **stack, char *s);
// pos.c
int		ft_position(t_stack **b);
void	ft_push_a_to_b(t_stack **a, t_stack **b, int range);
void	ft_bush_b_to_a(t_stack **a, t_stack **b);
void	m_p(t_stack **b);
int		mp2(t_stack **a);
// sort_s.c
void	ft_sort_s(t_stack **a, t_stack **b);
void	sort_t(t_stack **s);
void	sort_f(t_stack **a, t_stack **b);
void	sort_f2(t_stack **a, t_stack **b, int mp);
void	sort_four(t_stack **a, t_stack **b);
// sort_s2.c
#endif