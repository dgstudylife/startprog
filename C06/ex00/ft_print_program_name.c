/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:20:58 by donggele          #+#    #+#             */
/*   Updated: 2021/03/12 00:05:06 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	arr_print(char *arr)
{
	while (*arr)
		write(1, arr++, 1);
}

int	main(int argc, char *argv[])
{
	if (argc > 0)
		arr_print(argv[0]);
	write(1, "\n", 1);
	return (0);
}
