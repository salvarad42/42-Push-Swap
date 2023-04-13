/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvarad <salvarad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:59:59 by salvarad          #+#    #+#             */
/*   Updated: 2023/03/27 17:02:03 by salvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *stack)
{
	int		i;

	i = 0;
	while (stack)
	{
		stack = stack -> next;
		i++;
	}
	return (i);
}

void	ft_sort_stack(t_list **stack)
{
	if (ft_lstsize(*stack) <= 5)
		ft_simple_sort(stack);
	else
		ft_radix_sort(stack);
}
