/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 13:55:54 by donggele          #+#    #+#             */
/*   Updated: 2021/03/07 17:35:37 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern int		make_condition(char *cond);
void	rush(void);

int		main(int argc, char *argv[])
{
	if (argc != 2 || !make_condition(argv[1]))
		write(1, "Error\n", 6);
	else
		rush();
	return (0);
}
