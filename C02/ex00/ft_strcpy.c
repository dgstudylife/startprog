/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 13:33:52 by donggele          #+#    #+#             */
/*   Updated: 2021/03/08 22:23:20 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char *tmp;

	tmp = dest;
	while (*src)
	{
		*tmp = *src;
		src++;
		tmp++;
	}
	*tmp = '\0';
	return (dest);
}
