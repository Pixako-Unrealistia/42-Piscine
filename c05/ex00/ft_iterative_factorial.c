/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:07:22 by schongte          #+#    #+#             */
/*   Updated: 2022/06/20 13:24:49 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	store;

	store = 1;
	if (nb > 0)
	{
		while (nb > 0)
		{
			store = store * nb;
			nb--;
		}
		return (store);
	}
	if (nb == 0)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	c;

	c = -121;
	printf("%d", ft_iterative_factorial(c));
	return(0);
}*/
