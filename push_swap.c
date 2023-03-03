#include <stdlib.h>

int main(int argc, char **argv)
{
    char    **args;
    
    if (argc < 2)
        return (-1);
    if (argc == 2)
    {
        args = ft_split(argv[1], ' ');
        if (ft_check_errors(args, 0))
        {
            ft_free(args);
            return (-1);
        }
        ft_free(args);
    }
    if (argc > 2)
    {
        args = argv;
        if (ft_check_errors(args, 1))
            return (-1);
    }
    return (0);
}