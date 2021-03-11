/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 00:16:39 by donggele          #+#    #+#             */
/*   Updated: 2021/03/12 01:17:05 by donggele         ###   ########.fr       */
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
	int n;

	n = argc - 1;
	while(n)
	{
		arr_print(argv[n]);
		write(1, "\n", 1);
		n--;
	}
	return (0);
}
