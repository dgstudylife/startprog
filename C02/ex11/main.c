/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 20:35:51 by donggele          #+#    #+#             */
/*   Updated: 2021/03/08 20:43:36 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char a;
	char src[100] = "Coucou\ntu vas bien ? \t";
	a = 127;

	ft_putstr_non_printable(src);
	write(1, "\n", 1);
	ft_putstr_non_printable(&a);
	return (0);
}
