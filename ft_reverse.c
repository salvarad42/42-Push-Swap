#include "push_swap.h"

int ft_reverse(t_list **stack)
{
    t_list  *aux;
    t_list  *last;

    if (ft_lstsize(*stack) < 2)
        return (-1);
    last = ft_lstlast(*stack);
    aux = *stack;
    while (aux)
    {
        if (aux -> next -> next == NULL)
        {
            aux -> next = NULL;
        }
        aux = aux -> next;
    }
    last -> next = *stack;
    *stack = last;
    return (0);
}

int rra(t_list **stack_a)
{
    if (ft_reverse(stack_a) == -1)
        return (-1);
    ft_putendl_fd("rra", 1);
    return (0);
}

int rrb(t_list **stack_b)
{
    if (ft_reverse(stack_b) == -1)
        return (-1);
    ft_putendl_fd("rrb", 1);
    return (0);
}

int rrr(t_list **stack_a, t_list **stack_b)
{
    if ((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
        return (-1);
    ft_reverse(stack_a);
    ft_reverse(stack_b);
    ft_putendl_fd("rrr", 1);
    return (0);
}