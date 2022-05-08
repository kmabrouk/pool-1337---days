/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:16:36 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/08/24 10:43:42 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include"ft_stock_str.h"

/* typedef struct s_stock_str
{
int size;
char *str;
char *copy;
} t_stock_str;
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *str)
{
	char	*T;
	int		i;

	i = 0;
	T = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (T == NULL)
		return (NULL);
	while (str[i])
	{
		T[i] = str[i];
		i++;
	}
	T[i] = '\0';
	return (T);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	i = 0;
	tab = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strcpy(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

/* int main()
{
	int i;
	i = 0;
	char *T[] = {"kamal","adil","youssef"};
	t_stock_str *p;
	 p=ft_strs_to_tab(3,T);
	while (p[i].str)
	{
		printf("%d    %s    %s",p[i].size,p[i].str,p[i].copy);
		i++;
	}
}*/
