/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:59:23 by schongte          #+#    #+#             */
/*   Updated: 2022/06/09 20:19:15 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	init(int first, int second, int third)
{
	char	*set;

	set = "0123456789";
	write(1, set + third, 1);
	write(1, set + second, 1);
	write(1, set + first, 1);
	if (third == 7)
	{
		if (second == 8)
		{
			if (first == 9)
			{
			}
		}
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	first;
	int	second;
	int	third;

	third = 0;
	while (third <= 7)
	{
		second = third + 1;
		while (second <= 8)
		{
			first = second + 1;
			while (first <= 9)
			{
				init(first, second, third);
				first++;
			}
			second++;
		}
		third++;
	}
}
