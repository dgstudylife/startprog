/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 02:58:52 by donggele          #+#    #+#             */
/*   Updated: 2021/03/15 03:07:57 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int number)
{
	if (number > 9)
		ft_putnbr(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}

void	ft_sow_tab(struct s_stock_str *par)
{
	int index;

	index = 0;
	while (par[index].str != 0)
	{
		ft_putstr(par[index].str);
		write(1, "\n" 1);
		ft_putnbr(par[index].size);
		write(1, "\n", 1);
		ft_putstr(par[index].copy);
		write(1, "\n", 1);
		index++;
	}

}
