/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_zero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:10:47 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/07/26 13:40:37 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fill_zero(int **map, int n)
{
	int	i;
	int	j;

	i = -1;
	while (i++ < n - 1)
	{
		j = -1;
		while (j++ < n - 1)
			map[i][j] = 0;
	}
	return (0);
}