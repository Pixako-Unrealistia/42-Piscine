/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 20:42:43 by schongte          #+#    #+#             */
/*   Updated: 2022/06/19 20:52:25 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int moulinette, char **norminette)
{
	char	*charter;
	int		counter;
	char	writer;

	counter = 1;
	while (moulinette > counter)
	{
		charter = norminette[counter];
		while (*charter)
		{
			writer = *charter;
			write(1, &writer, 1);
			charter++;
		}
		write(1, "\n", 1);
		counter++;
	}
	return (0);
}
