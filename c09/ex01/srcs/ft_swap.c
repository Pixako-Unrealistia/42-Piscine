/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 19:17:03 by schongte          #+#    #+#             */
/*   Updated: 2022/06/12 22:11:19 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}
/*
int	main(void)
{
	int	*a;
	int	*b;
	int	c;
	int	d;

	c = 7;
	d = 14;
	a = &c;
	b = &d;
	ft_swap(a,b);
	return(0);
}*/
