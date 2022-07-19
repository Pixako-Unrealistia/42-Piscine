/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:24:10 by schongte          #+#    #+#             */
/*   Updated: 2022/06/21 12:23:05 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	temp;

	temp = 1;
	if (nb < 1)
		return (0);
	while (temp * temp <= nb)
	{
		if (temp * temp == nb)
			return (temp);
		if (temp > 46341)
			break ;
		temp++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_sqrt(2147395600));
	return (0);
}*/
