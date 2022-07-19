/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:30:29 by schongte          #+#    #+#             */
/*   Updated: 2022/06/17 13:05:32 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	helpme;

	while (*str)
	{
		helpme = *str++;
		write(1, &helpme, 1);
	}
}
/*
int	main(void)
{
	ft_putstr("Hellouwu");
	return (0);
}*/
