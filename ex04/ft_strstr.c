/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaenko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:29:36 by asaenko           #+#    #+#             */
/*   Updated: 2023/12/04 10:31:58 by asaenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			if (s1[i] > s2[i])
			{
				return (1);
			}
			else
			{
				return (-1);
			}
		}
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	is_equal;
	int	find_len;

	i = 0;
	find_len = ft_strlen(to_find);
	while (str[i] != '\0')
	{
		str += 1;
		is_equal = ft_strncmp(str, to_find, find_len);
		if (is_equal == 0)
		{
			return (str);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char *res;

	res = ft_strstr("111apple111", "apple");
	printf("Output: %s\n", res);
}*/
