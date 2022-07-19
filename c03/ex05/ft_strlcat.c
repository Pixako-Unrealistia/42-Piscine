/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:35:15 by schongte          #+#    #+#             */
/*   Updated: 2022/06/16 20:58:18 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter++] != '\0')
		continue ;
	return (counter - 1);
}
/*
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;

	counter = 0;
	counter += ft_strlen(src);
	while (*dest++)
		counter++;
	while (*src && size-- > 0)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (counter);
}*/
//Refactored

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	tally;
	unsigned int	counter;

	tally = 0;
	while (dest[tally] && tally < size)
		tally++;
	counter = tally;
	while (src[tally - counter] && (tally + 1) < size)
	{
		dest[tally] = src[tally - counter];
		tally++;
	}
	if (counter < size)
		dest[tally] = '\0';
	return (counter + ft_strlen(src));
}
/*
int	main(void)
{
	char dest[111] = "Hello ";
	char src[] = "World!";

	printf("%i", ft_strlcat(dest,src, 20));
	printf("%s", dest);
//	printf("%lu", strlcat(dest, src, 20));
	return (0);
}*/
