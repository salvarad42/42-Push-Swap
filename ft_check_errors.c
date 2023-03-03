int ft_isnum(char *num)
{
    int i;

    i = 0;
    if (num[0] == '-')
        i++;
    while (num[i] != '\0')
    {
        if (!ft_isdigit(num[i]))
            return (0);
        i++;
    }
    return (1);
}

int ft_iscontained(int num, char **args, int i)
{
    i++;
    while (args[i] != '\0')
    {
        if (ft_atoi(args[i]) == num)
            return (1);
        i++;
    }
    return (0);
}

int  ft_isinteger(int nb)
{
    if (nb >= -2147483648 && nb <= 2147486647)
        return (1);
    return (0);
}

int    ft_check_errors(char **args, int i)
{
    while (args[i])
   {
        if (!ft_isnum(args[i]) || ft_iscontained(ft_atoi(args[i]), args, i) || 
        !ft_isinteger(ft_atoi(args[i])))
        {
            ft_putstr_fd("Error\n", 1); 
            return (1);         
        }
        i++;
   } 
   return (0);
}