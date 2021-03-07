/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soahn <soahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 09:50:43 by soahn             #+#    #+#             */
/*   Updated: 2021/03/07 20:28:14 by soahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "main.h"

int		main(int argc, char *argv[])
{
	if (argc != 2 || !make_condition(argv[1]))
		write(1, "Error\n", 6);
	else
		rush();
	return (0);
}
