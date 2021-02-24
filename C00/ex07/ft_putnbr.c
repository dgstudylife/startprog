/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 20:08:05 by donggele          #+#    #+#             */
/*   Updated: 2021/02/24 13:35:03 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x)
{
	char a;

	a = '0' + x;
	write(1, &a, 1);
}

void	ft_putnbr_negative(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr_negative(nb / 10);
		ft_putchar(8);
	}
	else if (nb <= -10)
	{
		ft_putnbr_negative(nb / 10);
		ft_putchar((-nb) % 10);
	}
	else
	{
		write(1, "-", 1);
		ft_putchar(-nb);
	}
}

void	ft_putnbr_positive(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr_positive(nb / 10);
		ft_putchar(nb % 10);
	}
	else
		ft_putchar(nb);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putnbr_negative(nb);
	}
	else
	{
		ft_putnbr_positive(nb);
	}
}
