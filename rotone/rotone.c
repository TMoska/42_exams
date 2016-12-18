/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 22:59:53 by tmoska            #+#    #+#             */
/*   Updated: 2016/12/05 23:13:31 by tmoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	char *str;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	str = argv[1];
	while (*str)
	{
		if ((*str <= 'Z' && *str >= 'A') || (*str <= 'z' && *str >= 'a'))
		{
			if (*str == 'z' || *str == 'Z')
				ft_putchar(*str - 25);
			else
				ft_putchar(*str + 1);
		}
		else
			ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
	return (0);
}
