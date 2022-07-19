/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:15:59 by schongte          #+#    #+#             */
/*   Updated: 2022/06/29 14:57:53 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	pint;
	int	*pitch;
	int	check;

	pint = 0;
	check = max - min;
	if (check <= 0)
	{
		*range = NULL;
		return (0);
	}
	pitch = malloc(check * sizeof(int));
	*range = pitch;
	if (pitch)
	{
		while (pint < check)
		{
			pitch[pint] = min + pint;
			pint++;
		}
		return (pint);
	}
	*range = NULL;
	return (-1);
}
/*
int	main(void)
{
	int	max = 1;
	//2147483647;
	int	min = 1;
	//2;
	int	*ran;
	int k = ft_ultimate_range(&ran , min, max);
	int	a = 0;
	//while (a < k)
	//{
	//	printf("%d", ran[a]);
	//	a++;
	//}
	printf("%d", k);
	printf("%d", ran[0]);
	return (0);
}*/
