/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:39:44 by schongte          #+#    #+#             */
/*   Updated: 2022/06/20 13:54:59 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if (power == 0)
		return (1);
	if (power < 1)
		return (0);
	while (power > 1)
	{
		nb *= temp;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(4, 10));
	return (0);
}*/
