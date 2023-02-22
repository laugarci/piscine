/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_prueba.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:39:07 by laugarci          #+#    #+#             */
/*   Updated: 2022/08/18 09:15:33 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	fin;

	i = 0;
	fin = size - 1;
	while (i < fin)
	{
		a = tab[i];
		tab[i] = tab[fin];
		tab[fin] = a;
		i++;
		fin--;
	}
}
