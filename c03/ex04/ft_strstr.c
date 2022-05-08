/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:06:43 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/08/15 09:45:51 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	i = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		k = 0;
		if (str[i + k] == to_find[k])
		{
			while (str[i + k] == to_find[k])
			{
				k++;
				if (to_find[k] == '\0')
				{
					return (&str[i]);
				}
			}
		}
		i++;
	}
	return (0);
}
