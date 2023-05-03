/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvarad <salvarad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:37:23 by salvarad          #+#    #+#             */
/*   Updated: 2023/05/03 10:40:49 by salvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isnum(char *num)
{
	int	i;

	if (num == NULL
		|| num[0] == '\0'
		|| (ft_strlen(num) == 1 && num[0] == '-'))
		return (0);
	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_iscontained(int num, char **args, int i)
{
	i++;
	while (args[i])
	{
		if (ft_atoi(args[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

int	ft_isinteger(char *arg)
{
	long long	nb;
	int			i;

	i = 0;
	while (arg[i] == '0')
		i++;
	if (ft_strlen(&arg[i]) > 11)
		return (0);
	nb = ft_atoi(arg);
	if (nb >= -2147483648 && nb <= 2147483647)
		return (1);
	return (0);
}

int	ft_check_errors(char **args)
{
	int	i;

	i = 0;
	while (args[i] || args[0] == NULL)
	{
		if (!ft_isnum(args[i])
			|| !ft_isinteger(args[i])
			|| ft_iscontained(ft_atoi(args[i]), args, i))
		{
			ft_putstr_fd("Error\n", STDERR_FILENO);
			exit (0);
		}
		i++;
	}
	return (0);
}
