/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvarad <salvarad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:54:32 by salvarad          #+#    #+#             */
/*   Updated: 2023/05/03 10:17:23 by salvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pos_min(t_list *stack)
{
	int	pos;
	int	min;
	int	i;

	i = 0;
	pos = i;
	min = stack -> index;
	while (stack)
	{
		if (stack -> index < min)
		{
			min = stack -> index;
			pos = i;
		}
		i++;
		stack = stack -> next;
	}
	return (pos);
}

void	ft_sort_3(t_list **stack, int pos_min)
{
	if (pos_min == 0)
	{
		ra(stack);
		sa(*stack);
		rra(stack);
	}
	else if (pos_min == 1)
	{
		if ((*stack)-> index < (*stack)-> next -> next -> index)
			sa(*stack);
		else
			ra(stack);
	}
	else if (pos_min == 2)
	{
		if ((*stack)-> index < (*stack)-> next -> index)
			rra(stack);
		else
		{
			sa(*stack);
			rra(stack);
		}
	}
}

void	ft_sort_4(t_list **stack_a, t_list *stack_b, int pos_min)
{
	if (pos_min == 1)
		sa(*stack_a);
	else if (pos_min == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (pos_min == 3)
		rra(stack_a);
	if (ft_is_sorted(*stack_a))
		return ;
	pb(stack_a, &stack_b);
	ft_sort_3(stack_a, ft_pos_min(*stack_a));
	pa(stack_a, &stack_b);
}

void	ft_sort_5(t_list **stack_a, t_list *stack_b, int pos_min)
{
	if (pos_min == 1)
		sa(*stack_a);
	else if (pos_min == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (pos_min == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (pos_min == 4)
		rra(stack_a);
	if (ft_is_sorted(*stack_a))
		return ;
	pb(stack_a, &stack_b);
	ft_sort_4(stack_a, stack_b, ft_pos_min(*stack_a));
	pa(stack_a, &stack_b);
}

void	ft_simple_sort(t_list **stack_a)
{
	t_list	*stack_b;
	int		size;
	int		pos_min;

	size = ft_lstsize(*stack_a);
	pos_min = ft_pos_min(*stack_a);
	stack_b = NULL;
	if (ft_is_sorted(*stack_a) || size < 2)
		return ;
	if (size == 2)
		sa(*stack_a);
	if (size == 3)
		ft_sort_3(stack_a, pos_min);
	if (size == 4)
		ft_sort_4(stack_a, stack_b, pos_min);
	if (size == 5)
		ft_sort_5(stack_a, stack_b, pos_min);
}
