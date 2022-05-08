/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:55:41 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/08/07 19:01:11 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;
	int	temp;

	i = 0;
	j = 0;
	while (i <= size - 1)
	{
		j = i + 1;
		min = i ;
		while (j < size)
		{
			if (tab[j] < tab[min])
			{
				min = j;
			}
			j++;
		}
		temp = tab[min];
		tab[min] = tab[i];
		tab[i] = temp;
		i++;
	}
}
