/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvarad <salvarad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:50:02 by salvarad          #+#    #+#             */
/*   Updated: 2022/09/29 11:12:17 by salvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c < 'A' || c > 'z' || (c > 'Z' && c < 'a'))
	{
		return (0);
	}
	return (1);
}