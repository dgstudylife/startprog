/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 00:08:43 by donggele          #+#    #+#             */
/*   Updated: 2021/03/08 00:11:46 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	int a;
	int b;
	int temp;
	char *areyouupper;
	char *areuUp;
	char *tmp;

	areyouupper = "ABCDEFGHUISDKJFIE";
	areuUp = "HelloWorld";
	tmp = "\0";
	a = ft_str_is_uppercase(areyouupper);
	b = ft_str_is_uppercase(areuUp);
	temp = ft_str_is_uppercase(tmp);
	printf("a = %d, b = %d, temp = %d", a, b, temp);
	return (0);
}
