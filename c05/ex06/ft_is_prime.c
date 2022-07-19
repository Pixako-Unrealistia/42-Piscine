/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:32:48 by schongte          #+#    #+#             */
/*   Updated: 2022/06/21 11:30:28 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	temp;

	temp = 7;
	if ((nb <= 1 || nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0)
		&& !(nb == 2 || nb == 3 || nb == 5))
		return (0);
	while (temp < nb / 2)
	{
		if (nb % temp == 0)
			return (0);
		temp += 2;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_is_prime(2147483647));
	printf("%d", ft_is_prime(1));
	return (0);
}*/
