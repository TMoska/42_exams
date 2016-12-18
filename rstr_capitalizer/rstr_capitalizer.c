/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 18:33:19 by exam              #+#    #+#             */
/*   Updated: 2016/12/18 02:38:58 by tmoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		a;

	a = 1;
	if (argc == 1)
		write(1, "\n", 1);
	while (a < argc)
	{
		i = 0;
		while (argv[a][i])
		{
			if (argv[a][i + 1] == '\t' || argv[a][i + 1] == ' ' || argv[a][i + 1] == '\0')
			{
				if (argv[a][i] >= 'a' && argv[a][i] <= 'z')
					argv[a][i] -= 32;
			}
			else
			{
				if (argv[a][i] >= 'A' && argv[a][i] <= 'Z')
					argv[a][i] += 32;
			}
			i++;
		}
		ft_putstr(argv[a]);
		a++;
	}
	return (0);
}
