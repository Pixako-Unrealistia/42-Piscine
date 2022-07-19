/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 20:57:51 by schongte          #+#    #+#             */
/*   Updated: 2022/06/19 22:36:08 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writer(char *str)
{
	while (*str != '\0')
	{
		write(1, &*str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	replace(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	compare(char *a, char *b)
{
	while ((*a == *b) && (*a != '\0') && (*b != '\0'))
	{
		a++;
		b++;
	}
	return (*a - *b);
}

int	main(int arc, char **arcv)
{
	int	list[1000];
	int	counter;
	int	temp;
	int	temp2;

	temp = 1;
	counter = 1;
	while (counter < arc)
	{
		list[counter] = counter;
		counter++;
	}
	while (temp < arc)
	{
		temp2 = temp;
		while (temp2 < arc)
		{
			if (compare(arcv[list[temp]], arcv[list[temp2]]) > 0)
				replace(&list[temp], &list[temp2]);
			temp2++;
		}
		writer(arcv[list[temp++]]);
	}
	return (0);
}
