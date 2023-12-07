/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaenko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:47:37 by asaenko           #+#    #+#             */
/*   Updated: 2023/12/04 10:26:08 by asaenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int	res_equal;
	int res_minus;

	res_equal = ft_strncmp("RDV123", "RDV456", 3);
	res_minus = ft_strncmp("RDV123", "ATV123", 3);
	printf("Comparing first 3 characters");
	printf("\nRDV123 vs RDV456: %d \n", res_equal);
	printf("RDV123 vs ATV123: %d \n", res_minus);
}*/
