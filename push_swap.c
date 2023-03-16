/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvarad <salvarad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:02:27 by salvarad          #+#    #+#             */
/*   Updated: 2023/03/16 10:53:29 by salvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;
	char	**args;

	if (argc < 2)
		return (-1);
	args = ft_check_args(argc, argv);
	if (argc == 2)
	{
		ft_check_errors(args, 1);
		ft_free(args);
	}
	else
		ft_check_errors(args, 0);
	stack_a = NULL;
	stack_b = NULL;
	return (0);
}
