/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagomad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:02:02 by amagomad          #+#    #+#             */
/*   Updated: 2024/04/18 10:03:41 by amagomad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	a = 1;
	while (a < argc - 1)
	{
		b = 1;
		while (b < argc - 1)
		{
			if (ft_strcmp(argv[b], argv[b + 1]) > 0)
			{
				ft_swap(&argv[b], &argv[b + 1]);
			}
			b++;
		}
		a++;
	}
	b = 1;
	while (b < argc)
	{
		ft_putstr(argv[b]);
		b++;
	}
	return (0);
}
