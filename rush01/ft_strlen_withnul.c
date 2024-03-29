/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_withnul.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:31:39 by ksongchu          #+#    #+#             */
/*   Updated: 2022/07/25 18:33:33 by ksongchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen_withnul(char *str)
{
	int	run_argv;

	run_argv = 0;
	while (str[run_argv] != '\0')
		run_argv++;
	return (run_argv + 1);
}
