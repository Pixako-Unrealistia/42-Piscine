/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 19:35:20 by schongte          #+#    #+#             */
/*   Updated: 2022/06/13 23:43:08 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;
	int	tempb;

	if (!(*b == 0))
	{
	tempa = *a;
	tempb = *b;
	*a = tempa / tempb;
	*b = tempa % tempb;
	}
}
/*
int	main()
{
	int c = 20;
	int d = 5;
	int *a = &c;
	int *b = &d;
	
	ft_ultimate_div_mod(a, b);	
	printf("%d", *a);
}*/
