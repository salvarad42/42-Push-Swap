#include "push_swap.h"

int ft_get_max_bits(t_list *stack_a, int max_index)
{
    int max_bits;

    max_bits = 0;
    while ((max_index >> max_bits) != 0)
        max_bits++;
    return (max_bits);
}

void    ft_radix_sort(t_list *stack_a, t_list *stack_b)
{
    int size;
    int max_bits;
    int i;
    int j;
    t_list  aux;

    size = ft_lstsize(stack_a);
    max_bits = ft_get_max_bits(stack_a, (size - 1);
    i = 0;
    while (i < max_bits)
    {
        j = 0;
        while (j < size)
        {
            aux = stack_a;
            if(((aux -> index >> i) & 1) == 1)
                ra(stack_a);
            else
                pb(stack_a, stack_b);
            j++;
        }
        while (ft_lstsize(stack_b) != 0)
             pa(stack_a, stack_b);
         i++;
    }
}