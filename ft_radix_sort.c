#include "push_swap.h"

int ft_get_max_bits(int max_index)
{
    int max_bits;

    max_bits = 0;
    while ((max_index >> max_bits) != 0)
        max_bits++;
    return (max_bits);
}
void    ft_sort_bit(t_list **stack_a, int i)
{
    int     j;
    int     size;
    t_list  *stack_b;
    t_list  *aux;

    stack_b = NULL;
    size = ft_lstsize(*stack_a);
    j = 0;
    while (j < size)
   {
        aux = *stack_a;
        if(((aux -> index >> i) & 1) == 1)
            ra(stack_a);
        else
            pb(stack_a, &stack_b);
        j++;
    }
    while (ft_lstsize(stack_b) != 0)
        pa(stack_a, &stack_b);
} 

void    ft_radix_sort(t_list **stack_a)
{
    int     max_bits;
    int     i;

    max_bits = ft_get_max_bits(ft_lstsize(*stack_a) - 1);
    i = 0;
    while (i < max_bits)
    {
        ft_sort_bit(stack_a, i);
        i++;
    }
}