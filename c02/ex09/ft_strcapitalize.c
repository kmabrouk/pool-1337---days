/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 14:50:03 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/08/10 18:53:34 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_not_alpha(char *c)
{
	if ((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z')
		|| (*c >= '0' && *c <= '9'))
		return (0);
	else
		return (1);
}

int	ft_is_min(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	int	k;

	k = 0;
	while (str[k] != '\0' )
	{
		if (str[k] >= 'A' && str[k] <= 'Z')
			str[k] += 32;
		k++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (ft_is_min(&str[i]) && z == 0)
			str[i] -= 32;
		if (ft_not_alpha(&str[i]))
			z = 0;
		else
			z = 1;
		i++;
	}
	return (str);
}
