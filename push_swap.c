/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvarad <salvarad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:02:27 by salvarad          #+#    #+#             */
/*   Updated: 2023/03/16 11:24:34 by salvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(int argc, char **args, t_list **stack)
{
	if (argc == 2)
	{
		ft_check_errors(args, 1);
		ft_make_stack(stack, args);
		ft_free_args(args);
	}
	else
	{
		ft_check_errors(args, 0);
		ft_make_stack(stack, args);
	}
	if (ft_is_sorted(stack))
	{
		ft_free_stack(stack);
		exit (0);
	}
	ft_sort_stack(stack);
}

int	main(int argc, char **argv)
{
	char	**args;
	t_list	**stack;

	stack = NULL;
	if (argc < 2)
		return (-1);
	args = ft_check_args(argc, argv);
	push_swap(argc, args, stack);
	ft_free_stack(stack);
	return (0);
}
