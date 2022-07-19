/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:35:15 by schongte          #+#    #+#             */
/*   Updated: 2022/06/16 13:52:07 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*dest)
		dest++;
	while (*src)
	{	
		*dest++ = *src++;
	}
	*dest = '\0';
	return (temp);
}
/*
int	main(void)
{
	char dest[111] = "Hello";
	char src[] = " World!";

	ft_strcat(dest,src);
	printf("%s", dest);
	return (0);
}*/
