/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:31:49 by donggele          #+#    #+#             */
/*   Updated: 2021/03/11 00:05:10 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_printable(unsigned char str)
{
	if (' ' <= str && str <= '~')
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char		s1;
	unsigned char		s2;

	while (*str)
	{
		if (!is_printable(*str))
		{
			write(1, "\\", 1);
			s1 = "0123456789abcdef"[(unsigned char)*str / 16];
			s2 = "0123456789abcdef"[(unsigned char)*str % 16];
			write(1, &s1, 1);
			write(1, &s2, 1);
		}
		else
			write(1, str, 1);
		str++;
	}
}
