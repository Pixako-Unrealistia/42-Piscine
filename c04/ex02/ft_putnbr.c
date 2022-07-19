/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:30:29 by schongte          #+#    #+#             */
/*   Updated: 2022/06/17 12:01:16 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb <= 9)
	{
		c = nb + 48;
		write(1, &c, 1);
		return ;
	}
	else
		ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}
/*
int	main(void)
{
	ft_putnbr(-2312);
	return (0);
}*/
