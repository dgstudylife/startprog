/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:18:19 by donggele          #+#    #+#             */
/*   Updated: 2021/03/08 18:29:19 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	unsigned int size;

	char dest[6] = "123456";
	size = 8;
	char src[12] = "Hello World!";
	ft_strlcpy(dest, src, size);
	printf("%s", dest);
	return (0);
}
