/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 17:24:31 by donggele          #+#    #+#             */
/*   Updated: 2021/03/09 17:49:23 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	unsigned int	a;

	char ap[5] = "ab234";
	char bp[3] = "zxy";

	a = ft_strlcat(ap, bp, 10);
	printf("%d", a);
	printf("\n%s", ap);
	return (0);
}
