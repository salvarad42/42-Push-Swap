/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvarad <salvarad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:02:27 by salvarad          #+#    #+#             */
/*   Updated: 2023/03/16 11:03:12 by salvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;
	char	**args;

	**stack_a = NULL;
	**stack_b = NULL;
	if (argc < 2)
		return (-1);
	args = ft_check_args(argc, argv);
	if (argc == 2)
	{
		ft_check_errors(args, 1);
		ft_new_stack(**stack_a, args);
		ft_free(args);
	}
	else
	{
		ft_check_errors(args, 0);
		ft_new_stack(**stack_a, args);
	}
	return (0);
}
