/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 18:14:36 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/08/06 11:50:26 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	char	c1;
	char	c2;

	c1 = 'N';
	c2 = 'P';
	if (n < 0)
		write(1, &c1, 1);
	else
		write(1, &c2, 1);
}
