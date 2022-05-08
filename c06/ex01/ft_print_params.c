/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 08:08:09 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/08/18 09:05:11 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int	main(int ac, char *av[])
{
	int	i;
	int	j;

	i = 1;
	while (av[i] && i <= ac)
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}