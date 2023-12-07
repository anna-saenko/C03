/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaenko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:15:39 by asaenko           #+#    #+#             */
/*   Updated: 2023/12/07 10:10:20 by asaenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int main(void)
{
	int res_minus;
	int res_equal;
	int res_plus;

	res_minus = ft_strcmp("apple", "banana");
	res_equal = ft_strcmp("apple", "apple");
	res_plus = ft_strcmp("apple", "able");
	printf("apple vs banana: %d \n",res_minus);
	printf("apple and apple: %d \n", res_equal);
	printf("apple vs able: %d \n", res_plus);
}*/
