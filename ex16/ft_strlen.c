/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:44:28 by amagomad          #+#    #+#             */
/*   Updated: 2024/05/03 17:22:45 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	res;

	i = 0;
	while (str[i] != '\0')
		i++;
	res = i;
	return (res);
}
/*int	main()
{
	printf("%d", ft_strlen("Hello World !"));
}*/
