/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 13:50:53 by schongte          #+#    #+#             */
/*   Updated: 2022/06/12 23:26:11 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	long	counter;
	char	temp;

	counter = 0;
	while (str[counter] != '\0')
	{
		temp = str[counter];
		write(1, &temp, 1);
		counter++;
	}
}
/*
int	main()
{
	ft_putstr("Neptune");
	return(0);
}
*/
