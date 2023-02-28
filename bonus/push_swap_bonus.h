/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:17:27 by afatir            #+#    #+#             */
/*   Updated: 2023/02/27 12:38:00 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

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

// checker.c
void	checker(t_stack **a, t_stack **b);
void	free_list_b(t_stack *a);
// atoi_pro_b.c
char	**ft_check1_b(int ac, char **av);
int		ft_check2_b(char **str);
int		ft_atoi_pro_b(char **p, int *r);
size_t	ft_space_b(char *str);
int		ft_atoi_zero_b(char *p);
// linked_list.c
t_stack	*ft_cr_stack_b(int i);
void	ft_add_end_b(t_stack **a, t_stack *n);
void	ft_add_front_b(t_stack **a, t_stack *n);
int		ft_strlen_stack_b(t_stack **a);
t_stack	*ft_end_stack_b(t_stack *s);
// fill_index.c
int		ft_dob_b(char **p);
int		*ft_fill_b(char **p, int i);
t_stack	*ft_pusha_b(int *ar, int i);
void	index_a_b(t_stack **a);
int		is_sort_check_b(t_stack *a);
// instuctions.c
void	ft_swap_b(t_stack **stack);
void	ft_rot_b(t_stack **stack);
void	ft_push_b(t_stack **a, t_stack **b);
void	ft_revrot_b(t_stack **stack);
// pos.c
int		ft_position_b(t_stack **b);
int		check_empty_b(t_stack **b);
int		ft_aplic_b(t_stack **a, t_stack **b, char *inst);
void	norm_inst_b(t_stack **a, t_stack **b, char *inst, int i);
#endif