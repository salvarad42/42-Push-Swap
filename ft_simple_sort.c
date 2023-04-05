int ft_get_min(t_list *stack)
{
    t_list  *aux;
    int     min;

    aux = stack;
    min = aux -> index;
    while (aux -> next)
    {
        aux = aux -> next;
        if (aux -> index < min)
            min = aux -> index;
    }
    return (min);
}

void ft_sort_3(t_list *stack_a)
{
    t_list  *aux;
    int     min;

    aux = stack;
    min = ft_get_min(stack_a);
    if (aux -> index == min)
    {
        ra(stack_a);
        sa(stack_a);
        rra(stack_a);
    }
    else if (aux -> index == min + 1)
    {
        if (aux -> next -> index == min)
            sa(stack_a);
        else
            rra(stack_a);
    }
    else
    {
        if (aux -> next -> index == min)
            ra(stack_a);
        else
        {
            sa(stack_a);
            rra(stack_a);
        }
    }
}

void    ft_sort_4(t_list *stack_a, t_list *stack_b)
{
    t_list  *aux;
    int     min;

    min = ft_get_min(stack_a);
    aux = stack_a;
    if (aux -> next -> index == min)
        sa (stack_a);
    else if (aux -> next -> next -> index == min)
    {
        ra(stack_a);
        ra(stack_a);
    }
    else if (ft_lstlast(stack_a) -> index == min)
        rra(stack_a);
    if (ft_is_sorted(stack_a))
        return ;
    pb(stack_a, stack_b);
    ft_sort_3(stack_a);
    pa(stack_a, stack_b);
}

void    ft_sort_5(t_list *stack_a, t_list *stack_b)
{
    t_list  *aux;
    int     min;
    
    min = ft_get_min(stack_a);
    aux = stack_a;
    if (aux -> next -> index == min)
        sa(stack_a);
    else if (aux -> next -> next -> index == min)
    {
        ra(stack_a);
        ra(stack_a);
    }
    else if (aux -> next -> next -> next -> index == min)
    {
        rra(stack_a);
        rra(stack_a);
    }
    else if (ft_lstlast(stack_a) -> index == min)
        rra(stack_a);
    if (ft_is_sorted(stack_a))
        return ;
    pb(stack_a, stack_b);
    ft_sort_4(stack_a, stack_b);
    pa(stack_a, stack_b);
}

void    ft_simple_sort(t_list *stack_a, t_list *stack_b)
{
    int size;

    if (ft_is_sorted(stack_a) || ft_lstsize(stack_a) < 2)
        return;
    size = ft_lstsize(stack_a);
    if (size == 2)
        sa(stack_a);
    if (size == 3)
        ft_sort_3(stack_a);
    if (size == 4)
        ft_sort_4(stack_a, stack_b);
    if (size == 5)
        ft_sort_5(stack_a, stack_b);
}