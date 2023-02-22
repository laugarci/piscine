/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 10:34:57 by laugarci          #+#    #+#             */
/*   Updated: 2022/08/15 12:33:05 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_str(int a[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(a[i] + 48);
		i++;
	}
	if (a[0] != (10 - n) || a[n - 1] != 9)
	{
		write(1, ", ", 2);
	}
}

void	ft_comp_n(int count, int a[], int n, int loops)
{
	int	tmp;

	count++;
	tmp = count;
	while (tmp <= 9)
	{
		a[loops] = tmp;
		if (loops < n - 1)
		{
			ft_comp_n(count, a, n, loops + 1);
		}
		else
		{
			ft_print_str (a, n);
		}
	count++;
	tmp++;
	}
}

void	ft_print_combn(int n)
{
	int	a_nb[10];
	int	loops;
	int	count;

	loops = 0;
	count = -1;
	ft_comp_n(count, a_nb, n, loops);
}
