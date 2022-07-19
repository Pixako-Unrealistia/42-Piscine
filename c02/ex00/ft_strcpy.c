/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 18:36:28 by schongte          #+#    #+#             */
/*   Updated: 2022/06/15 10:29:53 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	tempo;

	if (src == NULL)
		return (NULL);
	tempo = 0;
	while (src[tempo] != '\0')
	{
		dest[tempo] = src[tempo];
		tempo++;
	}
	dest[tempo] = '\0';
	return (dest);
}	
/*
	while (tempo < sizeof(src))
	{
		dest[tempo] = '\0';
		tempo++;
	}
	return (dest);
}*/
/*
int	main()
{
	char a[] = "Str";
	char b[100] = "String B";
	printf("%s", ft_strcpy(a,b));
	return(0);
}
*/
