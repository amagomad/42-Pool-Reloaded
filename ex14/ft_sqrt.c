/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:39:04 by amagomad          #+#    #+#             */
/*   Updated: 2024/04/17 18:41:36 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb > 0)
	{
		while (i * i <= nb)
		{
			if (i >= 46341)
				return (0);
			else if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}
/*int main()
{
	printf("%d", ft_sqrt(64));
	return (0);
}*/
