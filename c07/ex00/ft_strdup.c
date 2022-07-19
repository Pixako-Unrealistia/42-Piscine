/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:22:13 by schongte          #+#    #+#             */
/*   Updated: 2022/06/26 23:47:55 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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
/*
int	main(void)
{
	printf("%s", ft_strdup("Hayasaka"));
	return (0);
}*/
