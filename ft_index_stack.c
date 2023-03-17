#include "push_swap.h"

static t_list   *ft_next_min(t_list **stack)
{
    t_list  *aux;
    t_list  *min;

    if (!*stack)
        return (NULL);
    aux = *stack;
    min = aux;
    while (aux)
    {
        if ((aux -> index == -1) && (aux -> value < min -> value))
            min = aux;
        aux = aux -> next;
    }
    return (min);
}

void    ft_index_stack(t_list **stack)
{
    t_list  *aux;
    int     index;

    index = 0;
    aux = ft_next_min(stack);
    while (aux)
    {
        aux -> index = index++;
        aux = ft_next_min(stack);
    }
}