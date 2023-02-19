/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 09:11:50 by afatir            #+#    #+#             */
/*   Updated: 2023/02/05 15:21:22 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_free_all(char **p)
{
	size_t	j;

	j = 0;
	while (p[j])
		free(p[j++]);
	free(p);
	p = NULL;
	return (0);
}
