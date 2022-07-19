/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 10:21:10 by schongte          #+#    #+#             */
/*   Updated: 2022/06/16 16:20:49 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	charter;
	int	comparer;
	int	tempo;

	tempo = 0;
	charter = 0;
	comparer = 0;
	while (s1[tempo++] != '\0' && s1[tempo] <= n)
		charter += s1[tempo];
	tempo = 0;
	while (s2[tempo++] != '\0' && s1[tempo] <= n)
		comparer += s1[tempo];
	if (charter == comparer)
		return (0);
	else if (charter < comparer)
		return (charter - comparer);
	else if (charter > comparer)
		return (comparer - charter);
	return (0);
}*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	tempo;

	tempo = 0;
	while ((*s1 != '\0' || *s2 != '\0') && tempo != n)
	{
		if (*s1 != *s2)
		{
			if ((*s1 - *s2) > 0)
				return (1);
			if ((*s1 - *s2) < 0)
				return (-1);
		}
		tempo++;
		s1++;
		s2++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_strncmp("HelloaASDAFDS`","HellodASDFSAFf",6));
}*/
