/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:49:32 by donggele          #+#    #+#             */
/*   Updated: 2021/03/07 23:53:40 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	int a;
	int b;
	int temp;
	char *areyounum;
	char *areunumber;
	char *tmp;

	areyounum = "1235135158690";
	areunumber = "12314aad 1232415";
	tmp = "\0";
	a = ft_str_is_numeric(areyounum);
	b = ft_str_is_numeric(areunumber);
	temp = ft_str_is_numeric(tmp);
	printf("a = %d b = %d temp = %d", a, b, temp);
	return (0);
}
