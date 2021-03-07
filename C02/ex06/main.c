/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 00:20:15 by donggele          #+#    #+#             */
/*   Updated: 2021/03/08 00:22:07 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	int a;
	int b;
	int temp;
	char *print1;
	char *print2;
	char *tmp;

	areyoulower = " !\"123dklsjfdieklnvij";
	areuLower = "HelloWorld";
	tmp = "\0";
	a = ft_str_is_lowercase(areyoulower);
	b = ft_str_is_lowercase(areuLower);
	temp = ft_str_is_lowercase(tmp);
	printf("a = %d, b = %d, temp = %d", a, b, temp);
	return (0);
}
