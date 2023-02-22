/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sersanch <sersanch@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 16:08:45 by sersanch          #+#    #+#             */
/*   Updated: 2022/08/13 17:36:05 by sersanch         ###   ########.fr       */
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

void	print_row(int cols, char ch_sides, char ch_mid)
{
	int	current_col;

	current_col = 1;
	while (current_col <= cols)
	{
		if (current_col == 1 || current_col == cols)
		{
			ft_putchar(ch_sides);
		}
		else
		{
			ft_putchar(ch_mid);
		}
		current_col++;
	}
}

void	select_row(int row, int cols, int max_rows)
{
	if (row == 1)
	{
		print_row(cols, 'A', 'B');
	}
	else if (row == max_rows)
	{
		print_row(cols, 'C', 'B');
	}
	else
	{
		print_row(cols, 'B', ' ');
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
		select_row(current_row, x, y);
		ft_putchar('\n');
		current_row++;
	}
}
