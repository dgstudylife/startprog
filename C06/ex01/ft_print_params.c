/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 00:07:55 by donggele          #+#    #+#             */
/*   Updated: 2021/03/13 12:27:07 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	arr_print(char *arr)
{
	while (*arr)
		write(1, arr++, 1);
}

int		main(int argc, char *argv[])
{
	int i;
	int n;

	i = 1;
	n = argc - 1;
	while (n--)
	{
		arr_print(argv[i++]);
		write(1, "\n", 1);
	}
	return (0);
}
