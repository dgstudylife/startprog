/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 21:11:01 by donggele          #+#    #+#             */
/*   Updated: 2021/02/22 22:21:11 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	calculate(int n)
{
	char s;
	char e;

	s = (n / 10) + 48;
	e = (n % 10) + 48;
	write(1, &s, 1);
	write(1, &e, 1);
}

void	put_char(int a, int b)
{
	calculate(a);
	write(1, " ", 1);
	calculate(b);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			put_char(a, b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
