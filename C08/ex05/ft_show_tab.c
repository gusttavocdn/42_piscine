/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusda-si <gusda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 23:18:34 by gusda-si          #+#    #+#             */
/*   Updated: 2023/06/12 20:06:13 by gusda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int number);

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str)
	{
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putnbr(par->size);
		ft_putchar('\n');
		ft_putstr(par->copy);
		ft_putchar('\n');
		par++;
	}
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(STDOUT_FILENO, str++, 1);
}

void	ft_putnbr(int number)
{
	if (number == -2147483648)
	{
		write(STDOUT_FILENO, "-2147483648", 11);
		return ;
	}
	if (number < 0)
	{
		ft_putchar('-');
		number = -number;
	}
	if (number > 9)
		ft_putnbr(number / 10);
	ft_putchar('0' + (number % 10));
}

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

// struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
// void				ft_show_tab(struct s_stock_str *par);

// int	main(void)
// {
// 	char				*strs[3];
// 	struct s_stock_str	*tab;

// 	strs[0] = "Sasuke";
// 	strs[1] = "Naruto";
// 	strs[2] = "Kakashi";
// 	tab = ft_strs_to_tab(3, strs);
// 	ft_show_tab(tab);
// 	return (0);
// }
