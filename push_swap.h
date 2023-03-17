/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvarad <salvarad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:52:43 by salvarad          #+#    #+#             */
/*   Updated: 2023/03/16 11:15:21 by salvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}	t_list;

char		**ft_check_args(int argc, char **argv);
int			ft_check_errors(char **args, int i);
void		ft_free(char **array);
void		ft_index_stack(t_list **stack);
static void	ft_make_stack(t_list **stack, char *args);