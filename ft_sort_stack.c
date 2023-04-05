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
	t_list	*aux;

	aux = stack;
	i = 0;
	while (aux)
	{
		aux = aux -> next;
		i++;
	}
	return (i);
}

static void	ft_sort_stack(t_list *stack_a)
{
	t_list	*stack_b;

	stack_b = NULL;
	if (ft_lstsize(stack_a) <= 5)
		ft_simple_sort(stack_a, stack_b);
	else
		ft_radix_sort(stack_a, stack_b);
}
