/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sky.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:01:29 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/07/26 13:38:58 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h> 

static int	g_get_result = 0;
int	ft_strlen_withnul(char *str);
int	is_placable(int **map, int n, int rc[2], int nbr);
int	print_map(int **map, int n);
int	col_up(int **map, int n, int run_argv);
int	col_down(int **map, int n, int run_argv);
int	row_left(int **map, int n, int run_argv);
int	row_right(int **map, int n, int run_argv);

int	is_skyscaper(int **map, int n)
{
	print_map(map, n);
	if (col_up(map, n, 0) && col_down(map, n, n * 2) \
			&& row_left(map, n, n * 4) && row_right(map, n, n * 6))
	{
		g_get_result = 1;
		print_map(map, n);
		printf("\nEZ");
		return (1);
	}
	return (0);
}

int	last_valid(int row, int n, int **map)
{
	if (g_get_result)
		return (1);
	if (is_skyscaper(map, n))
		return (1);
	return (0);
}

int	recursive_fill_nbr(int **map, int n, int raw_row, int raw_col)
{
	int	nbr;
	int	row;
	int	col;
	int	i;
	int	rc[2];

	nbr = -1;
	i = -1;
	row = raw_row / n;
	col = raw_col % n;
	if (row == n)
		return (last_valid(row, n, map));
	while (++i < n)
	{
		rc[0] = row;
		rc[1] = col;
		if (is_placable(map, n, rc, ((++nbr) % n) + 1))
		{
			map[row][col] = ((nbr) % n) + 1;
			if (recursive_fill_nbr(map, n, raw_row + 1, raw_col + 1))
				return (1);
			map[row][col] = 0;
		}
	}
	return (0);
}
