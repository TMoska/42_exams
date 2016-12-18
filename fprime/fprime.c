/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 00:43:57 by tmoska            #+#    #+#             */
/*   Updated: 2016/12/18 01:17:33 by tmoska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	int i;
	int nb;

	if (ac != 2)
		nb = -1;
	else
		nb = atoi(av[1]);
	if (nb == 1)
		printf("1");
	i = 1;
	while(nb != 1 && ++i <= nb)
	{
		if (nb % i == 0)
		{
			printf("%d", i);
			nb /= i;
			i--;
			if (nb != 1)
				printf("*");
		}
	}
	printf("\n");
	return (0);
}
