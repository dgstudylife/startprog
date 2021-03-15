/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 02:58:52 by donggele          #+#    #+#             */
/*   Updated: 2021/03/15 15:06:58 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int size)
{
	char c;

	if (size == 0)
		return ;
	c = (size % 10) + '0';
	ft_putnbr(size / 10);
	write(1, &c, 1);
}

void	ft_sow_tab(struct s_stock_str *par)
{
	int index;

	index = 0;
	while (par[index].str != 0)
	{
		ft_putstr(par[index].str);
		write(1, "\n", 1);
		if (par[index].size)
			ft_putnbr(par[index].size);
		else
			write(1, "0", 1);
		write(1, "\n", 1);
		ft_putstr(par[index].copy);
		write(1, "\n", 1);
		index++;
	}
}
