/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 20:36:26 by schongte          #+#    #+#             */
/*   Updated: 2022/06/19 23:51:34 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	charter;
	char	*norminettechan;

	norminettechan = *argv;
	while (*norminettechan)
	{
		charter = *norminettechan;
		write(1, &charter, 1);
		norminettechan++;
	}
	write(1, "\n", 1);
	return (argc);
}
