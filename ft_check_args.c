/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvarad <salvarad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:32:34 by salvarad          #+#    #+#             */
/*   Updated: 2023/03/16 10:34:32 by salvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_check_args(int argc, char **argv)
{
	char	**args;

	if (argc == 2)
		args = ft_split(argv[1], ' ');
	if (argc > 2)
		args = argv;
	return (args);
}
