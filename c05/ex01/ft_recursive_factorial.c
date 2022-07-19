/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 13:21:11 by schongte          #+#    #+#             */
/*   Updated: 2022/06/20 13:29:35 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d",ft_recursive_factorial(22));
	return(0);
}
*/
