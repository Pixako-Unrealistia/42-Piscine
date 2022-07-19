/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 20:56:13 by schongte          #+#    #+#             */
/*   Updated: 2022/06/28 21:00:04 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	str_length(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}

int	final_length(char **strings, int size, int sep)
{
	int	length;
	int	counter;

	length = 0;
	counter = 0;
	while (counter < size)
	{
		length += str_length(strings[counter]);
		length += sep;
		counter++;
	}
	length -= sep;
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	int		counter;
	char	*string;
	char	*crop;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	length = final_length(strs, size, str_length(sep));
	string = (char *)malloc((length + 1) * sizeof(char));
	crop = string;
	if (!crop)
		return (0);
	counter = -1;
	while (++counter < size)
	{
		ft_strcpy(crop, strs[counter]);
		crop += str_length(strs[counter]);
		if (counter < size - 1)
		{
			ft_strcpy(crop, sep);
			crop += str_length(sep);
		}
	}
	*crop = '\0';
	return (string);
}
/*
int	main(void)
{
	int		counter;
	char	**strs;
	char	*sep = "!";
	char	*result;
	int	size = 2;
	strs = (char **)malloc(2 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 6 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 6 + 1);
	strs[0] = "Hello";
	strs[1] = "World!";
	result = ft_strjoin(size, strs, sep);
	printf("%s$\n", result);
	free(result);
}*/
