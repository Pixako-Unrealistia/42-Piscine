/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:03:36 by schongte          #+#    #+#             */
/*   Updated: 2022/06/28 12:06:41 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		lengths(int nbr, char *base, int length);

void	putbase(int nbr, char *base, char *resultant, int len);

int	looper2(char *str)
{
	int	counter;
	int	temp;

	counter = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[counter] != '\0')
	{
		if (str[counter] <= 32 || str[counter] == 127
			|| str[counter] == 43 || str[counter] == 45)
			return (0);
		temp = counter + 1;
		while (str[temp] != '\0')
		{
			if (str[counter] == str[temp])
				return (0);
			temp++;
		}
		counter++;
	}
	return (counter);
}

int	value_base(char str, char *base)
{
	int	value;

	value = 0;
	while (base[value] != '\0')
	{
		if (str == base[value])
			return (value);
		value++;
	}
	return (-1);
}

int	looper(char *str, int *tempval)
{
	int	count;
	int	counter;

	counter = 0;
	while ((str[counter] >= 9 && str[counter] <= 13) || str[counter] == 32)
		counter++;
	count = 1;
	while (str[counter] && (str[counter] == 43 || str[counter] == 45))
	{
		if (str[counter] == 45)
			count *= -1;
		counter++;
	}
	*tempval = counter;
	return (count);
}

int	ft_atoi_base(char *str, char *base)
{
	int		counter;
	int		flak;
	int		value;
	int		value2;
	int		len;

	value = 0;
	counter = 0;
	len = looper2(base);
	if (len >= 2)
	{
		flak = looper(str, &counter);
		value2 = value_base(str[counter], base);
		while (value2 != -1)
		{
			counter++;
			value = (value * len) + value2;
			value2 = value_base(str[counter], base);
		}
		return (value *= flak);
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_form, char *base_to)
{
	char	*resultant;
	char	*string;
	int		number;
	int		length;

	if (!looper2(base_form) || !looper2(base_to))
		return (NULL);
	number = ft_atoi_base(nbr, base_form);
	length = lengths(number, base_to, 0);
	resultant = (char *)malloc(sizeof(char) * (length + 1));
	string = resultant;
	if (!string)
		return (NULL);
	putbase(number, base_to, resultant, 0);
	resultant[length] = '\0';
	return (resultant);
}
/*
int	main(void)
{
	char	*con[] = {"-123as", "0123456789", "0123"};
	printf("%s\n", ft_convert_base(con[0], con[1], con[2]));
	return (0);
}*/
