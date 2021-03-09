/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 14:21:43 by donggele          #+#    #+#             */
/*   Updated: 2021/03/09 14:23:32 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char a[5] = "hello";
	char b[5] = "world";

	ft_strncat(a, b, 6);
	printf("%s", a);
	return (0);
}
