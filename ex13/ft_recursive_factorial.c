/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:51:29 by amagomad          #+#    #+#             */
/*   Updated: 2024/04/18 10:54:43 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}
/*
int	main()
{
	printf("%d", ft_recursive_factorial(5));
}*/
