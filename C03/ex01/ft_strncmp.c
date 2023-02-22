/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:39:30 by laugarci          #+#    #+#             */
/*   Updated: 2022/08/30 15:44:30 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_posneg(int a);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n != 0)
	{
		while ((s1[i] && s2[i]) && i < n - 1)
		{
			if (s1[i] != s2[i])
			{
				return (ft_posneg(s1[i] - s2[i]));
			}
		i++;
		}
	}
	else
		return (0);
	return (ft_posneg(s1[i] - s2[i]));
}

int	ft_posneg(int a)
{
	int	z;

	z = 0;
	if (a > z)
		z = 1;
	else if (a < z)
		z = -1;
	return (z);
}
