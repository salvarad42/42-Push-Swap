void ft_sort_3(t_list *stack)
{
    if (stack -> index == 0)
    {
        ra(stack);
        sa(stack);
        rra(stack);
    }
    else if (stack -> index == 1)
    {
        if (stack -> next -> index == 0)
            sa(stack);
        else
            rra(stack);
    }
    else if (stack -> index == 2)
    {
        if (stack -> next -> index == 0)
            ra(stack);
        else
        {
            sa(stack);
            rra(stack);
        }
    }
}

void    ft_sort_4(t_list *stack_a, t_list *stack_b)
{
    if (stack_a -> next -> index == 0)
        sa (stack_a);
    else if (stack_a -> next -> next -> index == 0)
    {
        ra(stack_a);
        ra(stack_a);
    }
    else if (ft_lstlast(stack_a) -> index == o)
        rra(stack_a);
    if (ft_is_sorted(stack_a))
        return ;
    pb(stack_a, stack_b);
    ft_sort_3(stack_a);
    pa(stack_a, stack_b);
}

void    ft_sort_5(t_list *stack_a, t_list *stack_b)
{
    if (stack_a -> next -> index == 0)
        sa(stack_a);
    else if (stack_a -> next -> next -> index == 0)
    {
        ra(stack_a);
        ra(stack_a);
    }
    else if (stack_a -> next -> next -> next -> index == 0)
    {
        rra(stack_a);
        rra(stack_a);
    }
    else if (ft_lstlast(stack_a) -> index == 0)
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