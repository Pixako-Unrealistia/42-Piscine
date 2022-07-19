/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:15:59 by schongte          #+#    #+#             */
/*   Updated: 2022/06/27 21:15:07 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*pitch;
	int	pint;

	if (min >= max)
		return (NULL);
	max -= min;
	pitch = malloc(max * sizeof(int));
	pint = -1;
	while (++pint < max)
	{
		pitch[pint] = min + pint;
	}
	return (pitch);
}
/*
int	main(void)
{
	//int *taxx; 
	printf("%d", ft_range(1,2147483647)[1]);
	//printf("%d" , taxx[1]);
	return (0);
}*/
