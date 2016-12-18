/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 10:34:39 by exam              #+#    #+#             */
/*   Updated: 2016/09/23 11:02:14 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_digit(const char *str)
{
	if (*str >= '0' && *str <= '9')
		return (1);
	else
		return (0);
}

int		ft_atoi(const char *str)
{
	int neg;
	int res;

	res = 0;
	neg = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (is_digit(str) == 1)
	{
		res *= 10;
		res += *str - 48;
		str++;
	}
	return (res * neg);
}
