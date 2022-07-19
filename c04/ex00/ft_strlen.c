/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:21:48 by schongte          #+#    #+#             */
/*   Updated: 2022/06/16 15:29:59 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str++)
		counter++;
	return (counter);
}
/*
int	main(void)
{
	printf("%d", ft_strlen("Ayayayaya"));
	return (0);
}*/
