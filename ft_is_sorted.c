#include "push_swap.h"

void    ft_is_sorted(t_list **stack)
{
    t_list *aux;

    aux = *stack;
    while (aux && aux -> next)
    {
        if (aux -> value > aux -> next -> value)
            return (0);
        aux = aux -> next;
    }
    return (1);
}