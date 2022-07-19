/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 11:08:30 by schongte          #+#    #+#             */
/*   Updated: 2022/06/24 13:51:38 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str++)
		counter++;
	return (counter);
}

int	looper(char *str)
{
	int	counter;
	int	tab;
	int	len;

	len = ft_strlen(str);
	counter = 0;
	if (str[0] == '\0' || len == 1)
		return (0);
	while (str[counter] != '\0')
	{
		if (str[counter] <= 32 || str[counter] == 127
			|| str[counter] == 43 || str[counter] == 45)
			return (0);
		tab = counter + 1;
		while (tab < ft_strlen(str))
		{
			if (str[counter] == str[tab])
				return (0);
			tab++;
		}
		counter++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	int		error;
	long	nb;

	error = looper(base);
	len = ft_strlen(base);
	nb = nbr;
	if (error == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < len)
			ft_putchar(base[nb]);
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
	}
}
/*
int	main(void)
{
	ft_putnbr_base(12341525, "01");
}*/
