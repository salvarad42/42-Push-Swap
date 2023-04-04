/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvarad <salvarad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:55:38 by salvarad          #+#    #+#             */
/*   Updated: 2023/03/27 16:59:33 by salvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate(t_list *stack)
{
	t_list	*last;

	if (ft_lstsize(stack) < 2)
		return (-1);
	last = ft_lstlast(stack);
	last -> next = stack;
	stack = stack -> next;
	stack -> next = NULL;
	return (0);
}

int	ra(t_list *stack_a)
{
	if (ft_rotate(stack_a) == -1)
		return (-1);
	ft_putendl_dl("ra", 1);
	return (0);
}

int	rb(t_list *stack_b)
{
	if (ft_rotate(stack_b) == -1)
		return (-1);
	ft_putendl_dl("rb", 1);
	return (0);
}

int	rr(t_list *stack_a, t_list *stack_b)
{
	if ((ft_lstsize(stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
		return (-1);
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	ft_putendl_dl("rr", 1);
	return (0);
}
