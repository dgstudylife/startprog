/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:59:41 by donggele          #+#    #+#             */
/*   Updated: 2021/03/08 00:03:40 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	int a;
	int b;
	int temp;
	char *areyoulower;
	char *areuLower;
	char *tmp;

	areyoulower = "abcdefghijklmn";
	areuLower = "HelloWorld";
	tmp = "\0";
	a = ft_str_is_lowercase(areyoulower);
	b = ft_str_is_lowercase(areuLower);
	temp = ft_str_is_lowercase(tmp);
	printf("a = %d, b = %d, temp = %d", a, b, temp);
	return (0);
}
