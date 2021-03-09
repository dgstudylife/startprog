/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 14:05:40 by donggele          #+#    #+#             */
/*   Updated: 2021/03/09 14:09:23 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char a[5] = "hello";
	char b[5] = "world";

	ft_strcat(a, b);
	printf("%s", a);
	return (0);
}
