/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 20:50:27 by donggele          #+#    #+#             */
/*   Updated: 2021/03/13 21:29:11 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *s)
{
	int	length;

	length = 0;
	while (s[length])
		length++;
	return (length);
}

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;

	i = 0;
	p = (char *)malloc(ft_strlen(src) + 1);
	if (p != NULL)
	{
		while (src[i])
		{
			p[i] = src[i];
			i++;
		}
		p[i] = '\0';
	}
	return (p);
}
