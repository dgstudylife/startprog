/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   using_ft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:34:02 by donggele          #+#    #+#             */
/*   Updated: 2021/03/17 18:23:58 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_whitespace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		atoi_decimal(char *str)
{
	int decimal;
	int minus;

	decimal = 0;
	minus = 1;
	while (ft_is_whitespace(*str))
		str++;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			minus *= -1;
	while ('0' <= *str && *str <= '9')
	{
		decimal *= 10;
		decimal += (minus * (*(str++) - '0'));
	}
	return (decimal);
}

void	ft_putnbr(int number)
{
	if (number == -2147483648)
	{
		ft_putnbr(number / 10);
		ft_putchar('8');
	}
	else if (number < 0)
	{
		ft_putchar('-');
		ft_putnbr(-number);
	}
	else
	{
		if (number > 9)
			ft_putnbr(number / 10);
		ft_putchar('0' + number % 10);
	}
}
