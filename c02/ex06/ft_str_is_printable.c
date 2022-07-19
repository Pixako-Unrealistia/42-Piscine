/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 22:55:01 by schongte          #+#    #+#             */
/*   Updated: 2022/06/14 21:31:29 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	tempo;

	tempo = 0;
	while (str[tempo] != '\0')
	{
		if (!(str[tempo] >= 32 && str[tempo] <= 126))
			return (0);
		tempo++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_str_is_printable("~asdfjkhdafjhTEST!TESTTESTTEST"));

}*/
