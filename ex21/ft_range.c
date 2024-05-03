/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 22:03:19 by amagomad          #+#    #+#             */
/*   Updated: 2024/04/18 10:06:11 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min));
	if (p == NULL)
		return (NULL);
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
/*
int main()
{
	int	min = 2;
	int	max = 10;
	int	i;
	int	*p;

	p = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d", p[i]);
		i++;
	}
	free(p);
	return (0);
}*/
