/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:15:59 by schongte          #+#    #+#             */
/*   Updated: 2022/06/29 15:05:00 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	check;
	int	counter;
	int	*allocat;
	int	*temp;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	check = max - min;
	allocat = malloc(check * sizeof(int));
	temp = allocat;
	if (temp)
	{
		*range = allocat;
		counter = -1;
		while (++counter < check)
			allocat[counter] = min + counter;
		return (check);
	}
	*range = 0;
	return (-1);
}
/*
int	main(void)
{
	int	max =  2147483647;
	int	min =  1;
	int	*ran;
	int k = ft_ultimate_range(&ran , min, max);
	int	a = 0;
	//while (a < k)
	//{
	//	printf("%d", ran[a]);
	//	a++;
	//}
	printf("%d\n", k);
	printf("%d", ran[2147483645]);
	return (0);
}*/
