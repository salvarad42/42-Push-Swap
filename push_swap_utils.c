void    ft_free(char **array)
{
    int i;

    i = 0;
    if (!array)
        return;
    while (array[i])
    {
        free(array[i]);
        i++;
    }
    free (array);
}