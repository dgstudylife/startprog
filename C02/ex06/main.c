/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 00:20:15 by donggele          #+#    #+#             */
/*   Updated: 2021/03/08 12:45:07 by donggele         ###   ########.fr       */
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

	print1 = " !()&*:123dklsj ~_'fdieklnvij";
	print2 = "\t\n";
	tmp = "\0";
	a = ft_str_is_printable(print1);
	b = ft_str_is_printable(print2);
	temp = ft_str_is_printable(tmp);
	printf("a = %d, b = %d, temp = %d", a, b, temp);
	return (0);
}
