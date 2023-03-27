/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvarad <salvarad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:31:38 by salvarad          #+#    #+#             */
/*   Updated: 2023/03/27 16:51:00 by salvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int value)
{
	t_list	*new_stack;

	new_stack = (t_list *) malloc(sizeof(t_list));
	if (!new_stack)
		return (NULL);
	new_stack -> value = value;
	new_stack -> index = -1;
	new_stack -> next = NULL;
	return (new_stack);
}

t_list	*ft_lstlast(t_list *stack)
{
	if (stack)
		while (stack -> next)
			stack = stack -> next;
	return (stack);
}

void	ft_lstadd_back(t_list **stack, t_list *new_stack)
{
	t_list	*aux;

	if (*stack == NULL)
		*stack = new_stack;
	else
	{
		aux = ft_lstlast(*stack);
		aux -> next = new_stack;
	}
}

static void	ft_make_stack(t_list **stack, char **args)
{
	t_list	*new_stack;
	char	**args;
	int		i;

	i = 0;
	while (args[i])
	{
		new_stack = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(stack, new_stack);
		i++;
	}
	ft_index_stack(stack);
}
