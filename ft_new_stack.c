/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvarad <salvarad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:31:38 by salvarad          #+#    #+#             */
/*   Updated: 2023/03/16 11:24:20 by salvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_new_stack(t_list **stack, char **args)
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
}
