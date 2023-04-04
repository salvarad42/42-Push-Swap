#include "push_swap.h"

int reverse(t_list *stack)
{
    t_list  *last;

    if (ft_lstlast(stack) < 2)
        return (-1);
    last = ft_lstlast(stack);
    while (stack)
    {
        if (stack -> next -> next == NULL)
        {
            stack -> next = NULL;
        }
        stack = stack -> next;
    }
    last -> next = stack;
    stack = last;
    return (0);
}

int rra(t_list *stack_a)
{
    if (reverse(stack_a) == -1)
        return (-1);
    ft_putendl_fd("rra", 1);
    return (0);
}

int rrb(t_list *stack_b)
{
    if (reverse(stack_b) == -1)
        return (-1);
    ft_putendl_fd("rrb", 1);
    return (0);
}

int rrr(t_list *stack_a, t_list *stack_b)
{
    if ((ft_lstsize(stack_a) < 2) || (ft_lstsize(stack_b) < 2))
        return (-1);
    reverse(stack_a);
    reverse(stack_b);
    ft_putendl_fd("rrr", 1);
    return (0);
}