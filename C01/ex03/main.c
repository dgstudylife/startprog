/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:36:43 by donggele          #+#    #+#             */
/*   Updated: 2021/02/25 11:40:37 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 42;
	b = 8;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d %d %d",a , b, div, mod);
	return(0);
}
