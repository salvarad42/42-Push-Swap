void    ft_free(char **array)
{
    int i;

    i = 0;
    while (array[i])
    {
        free(array[i]);
        i++;
    }
}