/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 02:43:01 by donggele          #+#    #+#             */
/*   Updated: 2021/03/17 02:53:04 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*array;
	int	index;

	if (!array = (int *)malloc(sizeof(int) * length))
		return (0);
	index = 0;
	if (length <= 0)
		return (0);
	while (index < length)
	{
		array[index] = f(tab[index]);
		index++;
	}
	return (array);
}
