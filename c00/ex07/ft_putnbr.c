/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:07:08 by schongte          #+#    #+#             */
/*   Updated: 2022/06/13 22:41:21 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	call(char regular, int counter, int nb)
{
	char	magic[100000];

	if (regular == '-' || regular == 48)
		write(1, &regular, 1);
	while (nb >= 1)
	{
		magic[counter] = (nb % 10) + '0';
		nb = nb / 10;
		counter++;
	}
	while (counter > 0)
	{
		counter--;
		write(1, &magic[counter], 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		call(48, 0, nb);
	}
	else if (nb < 1)
	{
		nb *= -1;
		call('-', 1, nb);
	}
	else
	{
		call('1', 1, nb);
	}
}
