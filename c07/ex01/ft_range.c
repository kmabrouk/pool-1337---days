/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 09:23:22 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/08/22 12:18:06 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*T;

	if (max - min <= 0)
		return (NULL);
	T = (int *)malloc((max - min) * sizeof(*T));
	i = 0;
	while (min < max)
	{
		T[i] = min;
		min++;
		i++;
	}
	return (T);
}
