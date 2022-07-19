/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schongte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:29:58 by schongte          #+#    #+#             */
/*   Updated: 2022/06/25 17:56:51 by schongte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	checker(char str, char *charset)
{
	while (*charset)
	{
		if (str == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	counter(char *str, char *charset)
{
	int	flag;
	int	count;

	flag = 0;
	count = 0;
	while (*str)
	{
		if (!(flag || checker(*str, charset)))
		{
			flag = 1;
			count++;
		}
		else if (flag && checker(*str, charset))
			flag = 0;
		str++;
	}
	return (count);
}

int	length(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str && !checker(*str, charset))
	{
		count++;
		str++;
	}
	return (count);
}

void	split(char **words, char *str, char *charset)
{
	int		flag;
	int		count;
	char	*pint;

	flag = 0;
	count = 0;
	while (*str)
	{
		if (checker(*str, charset))
			flag = 0;
		else
		{
			if (!flag)
			{
				words[count] = malloc(length(str, charset) + 1);
				pint = words[count];
				count++;
			}
			flag = 1;
			*pint = *str;
			pint++;
			*pint = '\0';
		}
		str++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**words;
	int		count;

	if (str == NULL || charset == NULL)
	{
		words = malloc(sizeof(char *));
		words[0] = NULL;
		return (words);
	}
	count = counter(str, charset);
	words = malloc(sizeof(char *) * (count + 1));
	if (words != NULL)
	{
		split(words, str, charset);
		words[count] = NULL;
	}
	return (words);
}
/*
int	main(void)
{
	char *str = "Let blood, be our#sacrament!$to^all who sinned.";
	char *charset = "!@#$%^&*()-=./, ";
	
	printf("String: '%s'\nCharset: '%s'\n", str ,charset);
	char **hayasaka = ft_split(str, charset);
	while (*hayasaka)
	{
		printf("'%s'\n", *hayasaka);
		hayasaka++;
	}
}*/
