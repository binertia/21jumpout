/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_placable.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmanupor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:06:57 by kmanupor          #+#    #+#             */
/*   Updated: 2022/07/25 19:08:25 by kmanupor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_placable(int **map, int n, int rc[2], int nbr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < n)
	{
		if (j != rc[1] && map[rc[0]][j] == nbr)
			return (0);
		else
			j++;
	}
	while (i < n)
	{
		if (i != rc[0] && map[i][rc[1]] == nbr)
			return (0);
		else
			i++;
	}
	return (1);
}
