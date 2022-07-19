/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:24:10 by schongte          #+#    #+#             */
/*   Updated: 2022/06/30 20:23:27 by schongte         ###   ########.fr       */
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
int	ft_find_next_prime_legacy(int nb)
{
	int	fi;
	int	se;

	fi = nb + 1;
	se = 2;
	if (nb <= 1)
		return (2);
	if (!ft_is_prime(nb))
	{
		while (fi++ > 0)
		{
			while (se++ < fi)
				if (fi % se == 0)
					break ;
			if (fi == se)
				return (fi);
		}
	}
	return (nb);
}*/

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_find_next_prime(2147483645));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(-121));
	return (0);
}*/
