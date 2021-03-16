/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 18:52:27 by donggele          #+#    #+#             */
/*   Updated: 2021/03/16 20:37:35 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strcpy(char *dest, char *src, char *until)
{
	while (src < until)
		*(dest++) = *(src++);
	*dest = 0;
}

int	meet_charset(char c, char *charset)
{
	int index;

	index = 0;
	while (charset[index])
	{
		if (charset[index] == c)
			return (1);
		index++;
	}
	return (0);
}

unsigned int	how_many_str(char *str, char *charset)
{
	unsigned int	count;

	count = 0;
	while (*str)
	{
		if (!meet_charset(*str, charset))
		{
			count++;
			while (*str && !meet_charset(*str, charset))
				str++;
		}
		str++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char		**array;
	unsigned int	index;
	char		*start_str;

	array = (char **)malloc(sizeof(char *) * how_many_str(str, charset) + 1);
	index = 0;
	while (*str)
	{
		if (!meet_charset(*str, charset))
		{
			start_str = str;
			while (*str && !meet_charset(*str, charset))
				str++;
			array[index] = (char *)malloc(str - start_str + 1);
			ft_strcpy(array[index++], start_str, str);
		}
		str++;
	}
	array[index] = 0;
	return (array);
}
