/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvarad <salvarad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:46:00 by salvarad          #+#    #+#             */
/*   Updated: 2023/03/29 17:32:02 by salvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_sorted(t_list *stack)
{
	while (stack && stack -> next)
	{
		if (stack -> value > stack -> next -> value)
			return (0);
		stack = stack -> next;
	}
	return (1);
}
