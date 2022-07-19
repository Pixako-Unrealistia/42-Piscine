/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:45:01 by schongte          #+#    #+#             */
/*   Updated: 2022/06/16 21:39:27 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
char	*ft_strstr(char *str, char *to_find)
{
	char	*temp;
	long	increment;
	long	tally;
	char	*saviour;

	temp = to_find;
	while (*to_find++)
		increment++;
	to_find = temp;
	while (*str++)
	{
		if (*to_find++ != *str)
		{
			to_find = temp;
			tally = 0;
		}
		else
			tally++;
		if (tally == increment)
		{
			while (*str++)
			{
				printf("hello");
				*saviour++ = *str;
			}
			break ;
		}
	}
	*str = '\0';
	return (saviour);
}
*/
//I've given up on pointers at this point. Sorry.
char	*ft_strstr(char *str, char *to_find)
{
	int	increment;
	int	tally;

	increment = 0;
	tally = 0;
	if (to_find[tally] == '\0')
		return (str);
	while (str[increment] != '\0')
	{
		while (str[increment + tally] == to_find[tally]
			&& str[increment + tally] != '\0')
			tally++;
		if (to_find[tally] == '\0')
			return (str + increment);
		tally = 0;
		increment++;
	}
	return (0);
}
/*
int	main(void)
{
	char dest[111] = "Desklamp";
	char src[] = "lb";

	printf("%s",ft_strstr(dest, src));
//	printf("%s", dest);
	return (0);
}*/
