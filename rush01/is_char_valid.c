/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_char_valid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:47:27 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/07/25 18:48:48 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_char_valid(char c, int n)
{
	if (c >= '1' && c <= n + '0')
		return (1);
	return (0);
}
