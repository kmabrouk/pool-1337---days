/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 14:01:38 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/08/23 11:40:38 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
//#include<stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		*dest = src[i];
		i++;
		dest++;
	}
	return (dest);
}

int	sum_lenth(int size, char **strs, int size_of_sep)
{
	int	i;
	int	len;

	i = 0;
	len = -1 * size_of_sep;
	while (i < size)
	{
		len += ft_strlen(strs[i]) + size_of_sep;
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*T;

	i = 0;
	if (size == 0)
	{
		T = (char *)malloc(sizeof(char));
		return (T);
	}
	len = sum_lenth(size, strs, ft_strlen(sep));
	T = (char *)malloc((len + 1) * sizeof(char));
	if (T == NULL)
		return (0);
	while (i < size)
	{
		T = ft_strcpy(T, strs[i]);
		if (i < size - 1)
			T = ft_strcpy(T, sep);
		i++;
	}
	*T = '\0';
	return (T - len);
}
/*
int main()
{
	char *T[] = {"kamal","adil","ali"};
	char *s = "--//--";
	printf("%s",ft_strjoin(3,T,s));
}*/
