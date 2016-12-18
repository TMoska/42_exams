/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 10:26:31 by exam              #+#    #+#             */
/*   Updated: 2016/12/18 01:58:00 by tmoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int	i1;
	int	i2;
	int	den;

	if (argc != 3)
	{
		printf("\n");
		return (0);
	}
	i1 = atoi(argv[1]);
	i2 = atoi(argv[2]);
	den = ((i1 < i2) ? i1 : i2) / 2;
	while (den > 0)
	{
		if ((i1 % den == 0) && (i2 % den == 0))
			break ;
		den--;
	}
	printf("%i\n", den);
	return (0);
}
