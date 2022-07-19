/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:36:28 by schongte          #+#    #+#             */
/*   Updated: 2022/06/15 22:56:28 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	tempo;

	tempo = 0;
	while (tempo < n && src[tempo] != '\0')
	{
		dest[tempo] = src[tempo];
		tempo++;
	}
	while (tempo < n)
	{
		dest[tempo] = '\0';
		tempo++;
	}
	return (dest);
}
/*
int	main()
{
	char a[] = "Str";
	char b[] = "String B";
	int  c   = 5;
	printf("%s", ft_strncpy(a, b, c));
	return(0);
}*/
