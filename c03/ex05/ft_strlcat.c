/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmabrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 10:10:44 by kmabrouk          #+#    #+#             */
/*   Updated: 2021/08/15 13:24:47 by kmabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	k;
	unsigned int	r;
	unsigned int	j;

	k = ft_strlen(dest);
	if (k >= size)
	{
		r = size + ft_strlen(src);
	}
	if (k < size)
	{
		j = 0;
		while (src[j] && j < (size - k - 1))
		{
			dest[k + j] = src[j];
			j++;
		}
		dest[k + j] = '\0';
		r = k + ft_strlen(src);
	}
	return (r);
}
/* int main()
{
	char d[] = "kamal";
	char s[]= "adil";
	printf("%d     %s",ft_strlcat(d,s,4),d);
}
*/
