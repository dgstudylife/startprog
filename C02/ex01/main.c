/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 22:53:02 by donggele          #+#    #+#             */
/*   Updated: 2021/03/08 21:55:22 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	unsigned int n;
	char *src;
	char dest[15];

	n = 7;
	src = "Hello World!";
	ft_strncpy(dest, src, n);

	printf("%s", dest);
	return (0);
}
