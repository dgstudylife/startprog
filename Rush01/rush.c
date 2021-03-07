/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soahn <soahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 22:33:26 by soahn             #+#    #+#             */
/*   Updated: 2021/03/07 20:28:12 by soahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "rush.h"

int	g_board[5][5];
int	g_isused_row[5][5];
int	g_isused_col[5][5];
int	*g_start[4];
int	g_move_intvl[4][2];
int	g_fail = 1;

void	print_board(void)
{
	int		i;
	int		j;
	char	n;

	i = 0;
	while (++i < 5)
	{
		j = 0;
		while (++j < 5)
		{
			n = g_board[i][j] + '0';
			write(1, &n, 1);
			if (j != 4)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}

int		fill_sub(int row, int col)
{
	int	block;

	block = 0;
	while (++block < 5)
	{
		if (g_isused_row[row][block] || g_isused_col[col][block])
			continue;
		g_isused_row[row][block] = 1;
		g_isused_col[col][block] = 1;
		g_board[row][col] = block;
		if (fill(row, col + 1))
			return (1);
		g_isused_row[row][block] = 0;
		g_isused_col[col][block] = 0;
	}
	return (0);
}

int		fill(int row, int col)
{
	if (row == 5)
	{
		if (is_answer())
		{
			print_board();
			g_fail = 0;
			return (1);
		}
		else
			return (0);
	}
	else if (col == 5)
		return (fill(row + 1, 1));
	else
		return (fill_sub(row, col));
}

void	init(void)
{
	g_start[0] = &g_board[1][1];
	g_start[1] = &g_board[4][1];
	g_start[2] = &g_board[1][1];
	g_start[3] = &g_board[1][4];
	g_move_intvl[0][0] = 5;
	g_move_intvl[0][1] = 1;
	g_move_intvl[1][0] = -5;
	g_move_intvl[1][1] = 1;
	g_move_intvl[2][0] = 1;
	g_move_intvl[2][1] = 5;
	g_move_intvl[3][0] = -1;
	g_move_intvl[3][1] = 5;
}

void	rush(void)
{
	init();
	fill(1, 1);
	if (g_fail)
		write(1, "Error\n", 6);
}
