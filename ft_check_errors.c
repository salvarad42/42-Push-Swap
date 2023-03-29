/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvarad <salvarad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:37:23 by salvarad          #+#    #+#             */
/*   Updated: 2023/03/29 17:39:17 by salvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isnum(char *num)
{
	int	i;

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

int	ft_isinteger(int nb)
{
	if (nb >= -2147483648 && nb <= 2147486647)
		return (1);
	return (0);
}

int	ft_check_errors(char **args, int i)
{
	while (args[i])
	{
		if (!ft_isnum(args[i]) || !ft_isinteger(ft_atoi(args[i]))
			|| ft_iscontained(ft_atoi(args[i]), args, i))
		{
			ft_putstr_fd("Error\n", 1);
			exit ();
		}
		i++;
	}
	return (0);
}
