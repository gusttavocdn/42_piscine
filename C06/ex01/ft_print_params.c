/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 05:29:11 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/08 09:48:37 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
void	ft_print_params(char *params[], int params_size);

int	main(int argc, char *argv[])
{
	if (argc > 0)
		ft_print_params(argv, argc);
	return (0);
}

void	ft_print_params(char *params[], int params_size)
{
	int	i;

	i = 1;
	while (i < params_size)
	{
		ft_putstr(params[i++]);
		ft_putstr("\n");
	}
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(STDOUT_FILENO, str++, 1);
}
