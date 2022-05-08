/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:30:17 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/08/21 16:26:03 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
char	*ft_strdup(char *src)
{
	int		i;
	int		k;
	char	*T;

	i = 0;
	k = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	T = (char *)malloc((i + 1) * sizeof(char));
	while (k < i)
	{
		T[k] = src[k];
		k++;
	}
	T[k] = '\0';
	return (T);
}
