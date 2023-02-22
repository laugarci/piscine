/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:17:17 by laugarci          #+#    #+#             */
/*   Updated: 2022/08/15 11:25:15 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	fn;
	int	sn;

	fn = 0;
	while (fn <= 98)
	{
		sn = fn + 1;
		while (sn <= 99)
		{
			ft_putchar(fn / 10 + '0');
			ft_putchar(fn % 10 + '0');
			ft_putchar(' ');
			ft_putchar(sn / 10 + '0');
			ft_putchar(sn % 10 + '0');
			if (!(fn == 98 && sn == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			sn++;
		}
		fn++;
	}
}
