/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:33:15 by donggele          #+#    #+#             */
/*   Updated: 2021/03/11 05:22:14 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int 			count;
	unsigned char	compare_char;

	compare_num = 0;
	count = 0;
	while (*str)
	{
		if (*str == '+' || *str == '-')
			return (0);
		count++;
	}
	if (count == 1)
		return (0);
	return (count);
}

int	ft_check_base(char *base)
{
	return(0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_len;

	base_len = ft_strlen(base);
}
