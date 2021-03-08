/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:31:49 by donggele          #+#    #+#             */
/*   Updated: 2021/03/08 21:41:56 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_non_printable(char *str)
{
		if (*str >= 32 && *str <= 126)
			return (0);
		else
			return (1);
}

void	printhex(unsigned int i)
{
	char 	s1;
	char 	s2;

	write(1, "\\", 1);
	s1 = "0123456789abcdef"[i / 16];
	s2 = "0123456789abcdef"[i % 16];
	write(1, &s1, 1);
	write(1, &s2, 1);
}

void	charToint(char *str)
{
	unsigned int i;

	i = *str;
	printhex(i);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (is_non_printable(str))
			charToint(str);
		else
			write(1, str, 1);
		str++;
	}
}
