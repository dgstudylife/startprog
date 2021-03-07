/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:37:38 by donggele          #+#    #+#             */
/*   Updated: 2021/03/07 23:44:10 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	int a;
	int b;
	char *areyoualpha;
	char *areualpha;

	areyoualpha = "Hello World";
	areualpha = "HelloWorld";
	a = ft_str_is_alpha(areyoualpha);
	b = ft_str_is_alpha(areualpha);
	printf("a = %d b = %d", a, b); 
	return (0);
}
