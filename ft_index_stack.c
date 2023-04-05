/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvarad <salvarad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:40:44 by salvarad          #+#    #+#             */
/*   Updated: 2023/03/29 17:16:41 by salvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*ft_next_min(t_list *stack)
{
	t_list	*aux;
	t_list	*min;

	if (!stack)
		return (NULL);
	aux = stack;
	min = aux;
	while (aux)
	{
		if ((aux -> index == -1) && (aux -> value < min -> value))
			min = aux;
		aux = aux -> next;
	}
	return (min);
}

void	ft_index_stack(t_list *stack)
{
	t_list	*aux;
	int		index;

	index = 0;
	aux = ft_next_min(stack);
	while (aux != NULL)
	{
		aux -> index = index++;
		aux = ft_next_min(stack);
	}
}
