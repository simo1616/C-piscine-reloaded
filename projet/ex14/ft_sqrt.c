/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:40:36 by mbendidi          #+#    #+#             */
/*   Updated: 2024/09/23 09:53:56 by mbendidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	max;
	int	i;

	max = 0;
	i = 1;
	if (nb == 1)
		return (1);
	if (nb / 2 > 46340)
		max = 46340;
	else if (nb / 2 < 46340)
		max = nb / 2;
	while (i <= max)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
