/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 18:30:32 by donggele          #+#    #+#             */
/*   Updated: 2021/03/15 04:36:24 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long long	ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char		*ft_strcpy(char *dest, char *src)
{
	while (*src)
		*dest = *src++;
	return (dest);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	char		*array;
	char		*temp;
	long long	strs_len;
	int			index;

	if (!size)
	{
		array = ((char *)malloc(1));
		array[0] = 0;
		return (ret);
	}
	strs_len = 0;
	index = 0;
	while (index < size)
		strs_len += ft_strlen(strs[index++]);
	array = (char *)malloc(strs_len + (size - 1) * ft_strlen(sep) + 1);
	temp = ft_strcpy(array, strs[0]);
	index = 1;
	while (index < size)
	{
		temp = ft_strcpy(temp, sep);
		temp = ft_strcpy(temp, strs[index++]);
	}
	*temp = 0;
	return (array);
}
