#include "push_swap.h"

int ft_push(t_list **stack_dst, t_list **stack_src)
{
    t_list  *aux;

    if(ft_lstsize(*stack_src) == 0)
        return (-1);
    aux = *stack_src;
    if(!*stack_dst)
    {
        *stack_dst = aux;
        *stack_dst -> next = NULL;
    }
    else
    {
        aux -> next = *stack_dst;
        *stack_dst = aux;
    }
    return (0);
}

int pa(t_list **stack_a, t_list **stack_b)
{
    if(ft_push(stack_a, stack_b) == -1)
        return (-1);
    ft_putendl_fd("pa", 1);
    return (0);
}

int pb(t_list **stack_a, t_list **stack_b)
{
    if(ft_push(stack_b, stack_a) == -1)
        return (-1);
    ft_putendl_fd("pb", 1);
    return (0);
}