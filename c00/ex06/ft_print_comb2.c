/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:23:11 by schongte          #+#    #+#             */
/*   Updated: 2022/06/10 22:41:17 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ini(int first, int second, int third, int fourth)
{
	char	*set;

	if (!(first >= 9 && second > 8))
	{
		set = "0123456789";
		write(1, set + first, 1);
		write(1, set + second, 1);
		write(1, " ", 1);
		write(1, set + third, 1);
		write(1, set + fourth, 1);
		if (!(first == 9 && second == 8 && third == 9 && fourth == 9))
		{
			write(1, ", ", 2);
		}
	}
}

void	invoke2(int *first, int *second, int *third, int *fourth)
{
	*third = *first;
	*second = *second + 1;
	*fourth = *second + 1;
	if (*second == 9)
	{
		*fourth = 0;
		*third = *first + 1;
	}
}

void	invoke(int first, int second, int third, int fourth)
{
	while (first <= 9)
	{
		ini(first, second, third, fourth);
		fourth ++;
		if (fourth > 9)
		{
			fourth = 0;
			third ++;
		}
		if (third > 9)
		{
			invoke2(&first, &second, &third, &fourth);
		}
		if (second > 9)
		{
			first ++;
			fourth = 1;
			third = first;
			second = 0;
		}	
	}
}

void	ft_print_comb(void)
{
	int	first;
	int	second;
	int	third;
	int	fourth;

	first = 0;
	second = 0;
	third = 0;
	fourth = 1;
	invoke(first, second, third, fourth);
}
