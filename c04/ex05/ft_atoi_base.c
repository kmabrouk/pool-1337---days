/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 08:38:44 by amoukhle          #+#    #+#             */
/*   Updated: 2021/08/23 11:09:54 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '-'
			|| str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == '+')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	else
		return (1);
}

int	ft_atoi(char *str, char *base)
{
	int	i;
	int	num;

	num = 0;
	i = 0;
	while (str[i])
	{
		num *= ft_strlen(base);
		if (str[i] >= '0' && str[i] <= '9')
			num += (str[i] - '0');
		else if (str[i] >= 'a' && str[i] <= 'z')
			num += (str[i] - 'a' + 10);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			num += (str[i] - 'A' + 10);
		i++;
	}
	return (num);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	signe;

	signe = 1;
	if (check_base(base))
	{
		i = 0;
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				signe *= -1;
			i++;
		}
		return (ft_atoi(str, base) * signe);
	}
	else
		return (0);
}
