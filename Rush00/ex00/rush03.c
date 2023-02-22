/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:25:35 by sersanch          #+#    #+#             */
/*   Updated: 2022/08/13 17:44:49 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	check_int(int n)
{
	int	check;

	check = 0;
	if (n <= 0)
	{
		check = -1;
		write(1, "The number must be positive", 27);
	}
	return (check);
}

void	print_row(int cols, char ch_left, char ch_mid, char ch_right)
{
	int	current_col;

	current_col = 1;
	while (current_col <= cols)
	{
		if (current_col == 1)
		{
			ft_putchar(ch_left);
		}
		else if (current_col == cols)
		{
			ft_putchar(ch_right);
		}
		else
		{
			ft_putchar(ch_mid);
		}
		current_col++;
	}
}

void	rush(int x, int y)
{
	int	current_row;
	int	current_col;

	current_row = 1;
	current_col = 1;
	if (check_int(x) == -1 || check_int(y) == -1)
	{
		return ;
	}
	while (current_row <= y)
	{
		if (current_row == 1 || current_row == y)
		{
			print_row(x, 'A', 'B', 'C');
		}
		else
		{
			print_row(x, 'B', ' ', 'B');
		}
		ft_putchar('\n');
		current_row++;
	}
}
