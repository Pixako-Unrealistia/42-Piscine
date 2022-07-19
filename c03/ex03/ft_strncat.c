/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:35:15 by schongte          #+#    #+#             */
/*   Updated: 2022/06/16 19:07:26 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*temp;

	temp = dest;
	while (*dest)
		dest++;
	while (*src && nb-- > 0)
	{	
		*dest++ = *src++;
	}
	*dest = '\0';
	return (temp);
}
/*
int	main(void)
{
	char dest[111] = "Hello ";
	char src[] = "Hellkjlhjfakjlsfh";

	ft_strncat(dest, src, 4);
	printf("%s", dest);
	return (0);
}*/
