/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:38:34 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/23 09:54:27 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	rslt;

	i = 1;
	rslt = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		rslt *= i;
		i++;
	}
	return (rslt);
}
