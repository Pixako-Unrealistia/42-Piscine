/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha_main.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 22:55:01 by schongte          #+#    #+#             */
/*   Updated: 2022/06/14 21:01:04 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	tempo;

	tempo = 0;
	while (str[tempo] != '\0')
	{
		if (!(str[tempo] >= 65 && str[tempo] <= 90)
			&& !(str[tempo] >= 97 && str[tempo] <= 122))
			return (0);
		tempo++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_str_is_alpha("bakaMitaiKodomonanone123"));
}*/
