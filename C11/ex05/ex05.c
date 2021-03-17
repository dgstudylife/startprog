/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donggele <donggele@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 19:16:48 by donggele          #+#    #+#             */
/*   Updated: 2021/03/17 19:23:07 by donggele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex05.h"

int		g_op_idx[50];
int		(*g_f[5])(int, int);
char	*g_err_msg[2];

void	init(void)
{
	g_op_idx['/'] = 0;
	g_op_idx['%'] = 1;
	g_op_idx['+'] = 2;
	g_op_idx['-'] = 3;
	g_op_idx['*'] = 4;
	g_f[0] = div;
	g_f[1] = mod;
	g_f[2] = sum;
	g_f[3] = sub;
	g_f[4] = mul;
	g_err_msg[0] = "Stop : division by zero";
	g_err_msg[1] = "Stop : modulo by zero";
}

int		is_valid_operator(char op)
{
	return (op == '+' || op == '-' || op == '*' || op == '/' || op == '%');
}

int		main(int argc, char *argv[])
{
	int		a;
	int		b;
	char	op;

	init();
	if (argc != 4)
		return (0);
	op = argv[2][0];
	if (argv[2][1] || !is_valid_operator(op))
	{
		ft_putstr("0\n");
		return (0);
	}
	a = atoi_decimal(argv[1]);
	b = atoi_decimal(argv[3]);
	if (b == 0 && (op == '/' || op == '%'))
		ft_putstr(g_err_msg[g_op_idx[(int)op]]);
	else
		ft_putnbr(g_f[g_op_idx[(int)op]](a, b));
	ft_putstr("\n");
	return (0);
}
