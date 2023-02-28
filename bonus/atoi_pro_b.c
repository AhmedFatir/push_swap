/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_pro_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:45:23 by afatir            #+#    #+#             */
/*   Updated: 2023/02/28 22:04:15 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_atoi_zero_b(char *p)
{
	int	i;

	i = 0;
	if (!ft_atoi(p))
	{
		if (p[i] == '-' || p[i] == '+')
			i++;
		while (p[i])
		{
			if (p[i] != '0')
				return (0);
			i++;
		}
	}
	return (1);
}

int	ft_atoi_pro_b(char **p, int *r)
{
	int		i;
	int		j;

	i = 0;
	while (p[i])
	{
		j = 0;
		while (p[i][j])
		{
			if (p[i][j] == '-' || p[i][j] == '+')
				j++;
			if (!ft_isdigit(p[i][j]) || !ft_atoi_zero_b(p[i]) || !ft_dob_b(p))
				return (ft_free_all(p), 0);
			while (ft_isdigit(p[i][j]))
			{
				if (p[i][j + 1] == '-' || p[i][j + 1] == '+')
					return (ft_free_all(p), 0);
				j++;
			}
		}
		i++;
	}
	*r = i;
	return (1);
}

size_t	ft_space_b(char *str)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			j++;
		i++;
	}
	return (j);
}

int	ft_check2_b(char **str)
{
	size_t	i;

	i = 1;
	while (str[i])
	{
		if (ft_strlen(str[i]) == ft_space_b(str[i]))
			return (0);
		i++;
	}
	return (1);
}

char	**ft_check1_b(int ac, char **av)
{
	char	**p;
	char	*s1;
	char	*s2;
	int		i;

	i = 1;
	if (ac <= 1)
		exit(1);
	if (!ft_check2_b(av))
	{
		ft_printf("Error\n");
		exit(1);
	}
	s1 = ft_strdup("");
	while (i < ac)
	{
		s2 = ft_strjoin(s1, av[i]);
		s1 = ft_strjoin(s2, " ");
		i++;
	}
	p = ft_split(s1, ' ');
	free(s1);
	return (p);
}
