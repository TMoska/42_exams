/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 10:07:39 by exam              #+#    #+#             */
/*   Updated: 2016/12/18 01:42:44 by tmoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

int		main(int argc, char **argv)
{
	char *str;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	str = argv[1];
	while (*str)
	{
		if (*str <= 'z' && *str >= 'a')
			ft_putchar(*str - 32);
		else if (*str <= 'Z' && *str >= 'A')
			ft_putchar(*str + 32);
		else
			ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
	return (0);
}
