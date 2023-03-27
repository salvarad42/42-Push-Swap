/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvarad <salvarad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:46:00 by salvarad          #+#    #+#             */
/*   Updated: 2023/03/27 16:46:53 by salvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_is_sorted(t_list **stack)
{
	t_list	*aux;

	aux = *stack;
	while (aux && aux -> next)
	{
		if (aux -> value > aux -> next -> value)
			return (0);
		aux = aux -> next;
	}
	return (1);
}
