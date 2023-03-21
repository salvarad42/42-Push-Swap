#include "push_swap.h"

void    ft_simple_sort(t_list **stack_a, t_list **stack_b)
{
    
}

int ft_lstsize(t_list *stack)
{
    int i;
    t_list  *aux;

    aux = stack;
    i = 0;
    while (aux)
    {
        aux = aux -> next;
        i++;
    }
    return (i);
}

static void ft_sort_stack(t_list **stack_a)
{
    t_list  **stack_b;

    stack_b = NULL;
    if (ft_lstsize(*stack_a) <= 5)
        ft_simple_sort(stack_a, stack_b);
    else
        ft_radix_sort(stack_a, stack_b);
}