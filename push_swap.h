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

# include "libft/libft.h"

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}	t_list;

char		**ft_check_args(int argc, char **argv);
int			ft_check_errors(char **args);
void		ft_free_args(char **array);
void		ft_free_stack(t_list *stack);
void		ft_index_stack(t_list *stack);
int			ft_is_sorted(t_list *stack);
void		ft_make_stack(t_list **stack, char **args);
void		ft_sort_stack(t_list **stack);
t_list		*ft_lstlast(t_list *stack);
void		ft_lstadd_back(t_list **stack, t_list *new_stack);
int			ft_lstsize(t_list *stack);
int			ft_push(t_list **stack_dst, t_list **stack_src);
int			pa(t_list **stack_a, t_list **stack_b);
int			pb(t_list **stack_a, t_list **stack_b);
int			ft_reverse(t_list **stack);
int			rra(t_list **stack_a);
int			rrb(t_list **stack_b);
int			rrr(t_list **stack_a, t_list **stack_b);
int			ft_rotate(t_list **stack);
int			ra(t_list **stack_a);
int			rb(t_list **stack_b);
int			rr(t_list **stack_a, t_list **stack_b);
int			ft_swap(t_list *stack);
int			sa(t_list *stack_a);
int			sb(t_list *stack_b);
int			ss(t_list *stack_a, t_list *stack_b);
void		ft_simple_sort(t_list **stack);
void		ft_radix_sort(t_list **stack);

#endif