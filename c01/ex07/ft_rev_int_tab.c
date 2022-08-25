/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 11:51:09 by schongte          #+#    #+#             */
/*   Updated: 2022/06/13 15:09:12 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	tempo;
	int	clone[10000];

	counter = 0;
	while (counter < size)
	{
		tempo = tab[counter];
		clone[size - counter - 1] = tempo;
		counter++;
	}
	counter = 0;
	while (counter < size)
	{
		tempo = clone[counter];
		tab[counter] = tempo;
		counter ++;
	}
}
/*
int	main()
{
	int tab[5] = {0,1,2,3,4};
	int size = 5;

	ft_rev_int_tab(tab,size);
	printf("%d %d %d %d %d", tab[0],tab[1],tab[2],tab[3],tab[4]);
	return(0);
}*/
