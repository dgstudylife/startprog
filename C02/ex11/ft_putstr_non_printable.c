/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:31:49 by donggele          #+#    #+#             */
/*   Updated: 2021/03/10 15:44:54 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_non_printable(char str)
{
	if ((str >= 0 && str <= 31) || str == 127)
		return (1);
	else
		return (0);
}

void		ft_putstr_non_printable(char *str)
{
	char		s1;
	char		s2;
	unsigned char	st;

	while (*str)
	{
		st = *str;
		if (is_non_printable(st))
		{
			write(1, "\\", 1);
			s1 = "0123456789abcdef"[st / 16];
			s2 = "0123456789abcdef"[st % 16];
			write(1, &s1, 1);
			write(1, &s2, 1);
		}
		else
			write(1, &st, 1);
		str++;
	}
}
