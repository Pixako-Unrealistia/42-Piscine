/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 11:21:07 by schongte          #+#    #+#             */
/*   Updated: 2022/06/28 12:05:20 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	lengths(int nbr, char *base, int length)
{
	int		len;
	long	nb;

	len = 0;
	while (base[len] != '\0')
		len++;
	if (nbr < 0)
	{
		nb = nbr * -1;
		length++;
	}
	else
		nb = nbr;
	while (nb >= len)
	{
		nb /= len;
		length++;
	}
	length++;
	return (length);
}

void	putbase(int nbr, char *base, char *resultant, int len)
{
	int		len2;
	int		len3;
	long	nb;

	len3 = 0;
	while (base[len] != '\0')
		len++;
	len2 = lengths(nbr, base, 0);
	nb = nbr;
	if (nb < 0)
	{
		resultant[0] = '-';
		nb *= -1;
		len3 = 1;
	}
	len2--;
	while (nb >= len)
	{
		resultant[len2] = base[nb % len];
		nb /= len;
		len2--;
	}
	if (nb < len)
		resultant[len3] = base[nb];
}
