/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_radix_sort.c									:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: salvarad <salvarad@student.42malaga.com	+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/05/03 00:57:57 by salvarad		  #+#	#+#			 */
/*   Updated: 2023/05/03 01:02:20 by salvarad		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_max_bits(int max_index)
{
	int	max_bits;

	max_bits = 0;
	while ((max_index >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	ft_sort_stack_b(t_list **stack_a, t_list **stack_b, int i)
{
	int		j;
	int		size;
	t_list	*aux;

	size = ft_lstsize(*stack_b);
	j = 0;
	while (j < size && !ft_is_sorted(*stack_a))
	{
		aux = *stack_b;
		if (((aux -> index >> i) & 1) == 1)
			pa(stack_a, stack_b);
		else
			rb(stack_b);
		j++;
	}
	if (ft_is_sorted(*stack_a))
	{
		while (ft_lstsize(*stack_b) != 0)
			pa(stack_a, stack_b);
	}
}

void	ft_sort_stack_a(t_list **stack_a, t_list **stack_b, int i)
{
	int		j;
	int		size;
	t_list	*aux;

	size = ft_lstsize(*stack_a);
	j = 0;
	while (j < size && !ft_is_sorted(*stack_a))
	{
		aux = *stack_a;
		if (((aux -> index >> i) & 1) == 1)
			ra(stack_a);
		else
			pb(stack_a, stack_b);
		j++;
	}
}

void	ft_radix_sort(t_list **stack_a)
{
	int		max_bits;
	int		i;
	t_list	*stack_b;

	stack_b = NULL;
	max_bits = ft_get_max_bits(ft_lstsize(*stack_a) - 1);
	i = 0;
	while (i < max_bits)
	{
		ft_sort_stack_a(stack_a, &stack_b, i);
		if (i + 1 < max_bits)
			ft_sort_stack_b(stack_a, &stack_b, i + 1);
		i++;
	}
	while (ft_lstsize(stack_b) != 0)
		pa(stack_a, &stack_b);
}
