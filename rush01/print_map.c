/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanupor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:04:13 by kmanupor          #+#    #+#             */
/*   Updated: 2022/07/26 13:40:07 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	print_map(int **map, int n)
{
	int	row;
	int	col;

	row = -1;
	while (row++ < n -1)
	{
		col = -1;
		while (col++ < n -1)
		{
			ft_putchar(map[row][col] + '0');
			ft_putchar(' ');
		}
		write(1, "\n", 1);
	}
	return (0);
}
