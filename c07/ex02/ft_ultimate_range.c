/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 11:18:07 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/08/22 12:18:36 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*T;
	int	i;
	int	nb;

	i = 0;
	nb = min;
	if (max <= min)
	{
		*range = (void *)0;
		return (0);
	}
	T = (int *)malloc(sizeof(*T) * (max - min));
	if (T == NULL)
		return (-1);
	while (nb < max)
	{
		T[i] = nb;
		nb++;
		i++;
	}
	*range = T;
	return (max - min);
}
