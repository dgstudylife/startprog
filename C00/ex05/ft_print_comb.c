/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 18:47:37 by donggele          #+#    #+#             */
/*   Updated: 2021/02/22 21:03:19 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char h, char t, char o)
{
	write(1, &h, 1);
	write(1, &t, 1);
	write(1, &o, 1);
}

void	ft_print_comb(void)
{
	char h;
	char t;
	char o;

	h = '0';
	while (h <= '7')
	{
		t = h + 1;
		while (t <= '8')
		{
			o = t + 1;
			while (o <= '9')
			{
				put_char(h, t, o);
				if (h != '7')
					write(1, ", ", 2);
				o++;
			}
			t++;
		}
		h++;
	}
}
