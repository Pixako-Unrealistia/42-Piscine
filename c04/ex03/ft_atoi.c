/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:30:29 by schongte          #+#    #+#             */
/*   Updated: 2022/06/24 16:58:38 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

int	looper(int pint, char *str, int value, int dividant)
{
	int	diff;
	int	flak;

	flak = 0;
	while (str[pint] == 43 || str[pint] == 45)
	{
		if (str[pint] == 45)
			flak++;
		pint++;
	}
	diff = pint;
	while (str[pint] >= 48 && str[pint] <= 57)
		pint++;
	while (diff - pint != 0)
	{
		value += ((str[pint - 1] - 48) * dividant);
		dividant *= 10;
		pint--;
	}
	if (flak % 2 != 0)
		return (-value);
	return (value);
}

int	ft_atoi(char *str)
{
	int	pint;
	int	value;
	int	dividant;

	value = 0;
	pint = 0;
	dividant = 1;
	while ((str[pint] >= 9 && str[pint] <= 13) || str[pint] == 32)
		pint++;
	return (looper(pint, str, value, dividant));
}
/*
int	main(void)
{
	printf("%d", ft_atoi("   ---+--+01234506789ab567"));
	return (0);
}*/
