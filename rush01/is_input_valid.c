/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_input_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:48:59 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/07/25 18:54:15 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen_withnul(char *str);
int	is_char_valid(char c, int n);

int	is_input_valid(char **argv)
{
	int	n;
	int	length_nul;
	int	run_argv;

	length_nul = ft_strlen_withnul(argv[1]);
	n = length_nul / 8;
	run_argv = 0;
	if (length_nul >= 32 && !(length_nul % 4 == 0))
		return (0);
	while (!(run_argv >= length_nul - 2))
	{
		if (!is_char_valid(argv[1][run_argv], n))
			return (0);
		if (!(argv[1][run_argv + 1] == ' '))
			return (0);
		run_argv += 2;
	}
	return (n);
}
