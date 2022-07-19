/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 21:18:40 by schongte          #+#    #+#             */
/*   Updated: 2022/06/24 21:32:25 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
//#include "../ex05/ft_show_tab.c"

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*ptr;
	int		len;

	len = 0;
	while (src[len] != '\0')
		len++;
	dest = malloc (len + 1);
	ptr = dest;
	while (*src != 0)
		*dest++ = *src++;
	*dest = '\0';
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			counter;
	t_stock_str	*tab;

	tab = malloc(sizeof (t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	counter = 0;
	while (counter < ac)
	{
		tab[counter].size = ft_strlen(av[counter]);
		tab[counter].str = av[counter];
		tab[counter].copy = ft_strdup(av[counter]);
		counter++;
	}
	tab[counter].str = 0;
	tab[counter].copy = 0;
	return (tab);
}
/*
int	main(int ac, char **av)
{
	ft_show_tab(ft_strs_to_tab(ac, av));
	return (0);
}*/
